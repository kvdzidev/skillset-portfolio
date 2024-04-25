// ----------- ZAD13 -----------
//(loop) (zadanie ponad program) * Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj trójkąt prostokątny z gwiazdek o wymiarach podanych w parametrach

//./rectangulartriangle 5 3 ➞ WYDRUKUJE: 
//*
//***
//*****
//./rectangulartriangle 3 3 ➞ WYDRUKUJE: 
//*
//**
//***


// ROZWIĄZANIE POCZATEK
// W argumencie jest podane wyrażenie zawierające trzy typy nawiasów, 
// Uzupełnij program, który sprawdzi, czy pary nawiasów „{”, „}”, „(“, „)”, „[„, „]” są poprawne domknięte.
// Jeśli są doprawnie domknięte wydrukuj "tak", jeśli nie są dobrze domknięte wydrukuj "nie"

// ./nawiasy "[()]{}{[()()]()}" ➞ WYDRUKUJE: tak
// ./nawiasy "[(])" ➞ WYDRUKUJE: nie
// ./nawiasy "[(]" ➞ WYDRUKUJE: nie


Kod programu:

#include <iostream>

class Node {
	private:
		char value;
		Node* next;

	public:
		Node(char value, Node* next) {
			this->value=value;
			this->next=next;
		}
		char getValue() {
			return value;
		}
		Node* getNext() {
			return next;
		}
};

class Stack {
	private:
		Node* top;

	public:
		Stack(){
			top = nullptr;
		}

		~Stack() {
			while (top != nullptr) {
				Node* temp = top;
				top = top->getNext();
				delete temp;
			}
		}
		
		void push(char value) {
			top = new Node(value, top);
		}
		
		bool isEmpty() const {
			return top == nullptr;
		}
		
		char peek() {
			return top->getValue();
		}
		
		char pop() {
			if (top == nullptr) {
				throw std::runtime_error("Stack is empty");
			}
			char value = top->getValue();
			Node* temp = top;
			top = top->getNext();
			
			delete temp; // pamiętaj o zwolnieniu pamięci
			return value;
		}
};
				
int main(int argc, char* argv[]) {
;;

// TODO uzupełnij kod w tym miejscu! rozwiązaniem jest tylko brakujący kod!
EXCLUDE TEST
	PASS
COMPILATION
	stdout:

	stderr:

	PASS
RUN exam "[()]{}{[()()]()}" INPUT=""
	stdout:
tak

	stderr:

EXIT CODE
	PASS
OUTPUT INCLUDE
	PASS
OUTPUT EXCLUDE
	PASS
RUN exam "[()[]{}{[()()]()}" INPUT=""
	stdout:
tak

	stderr:

EXIT CODE
	PASS
OUTPUT INCLUDE
	FAIL
;;
}


Napisz program drukujący choinkę używając rekurencji
Nie używaj pętli
Wysokość wzoru jest zależna od parametru

Program ma drukować następujący wzór:

./choinka 9 ➞ WYDRUKUJE: 
    5
  2 6
1 3 7
  4 8
    9
};
Drzewo Binarne:
Wstawianie węzła: Insert(node, value)
Usuwanie węzła: Delete(node, value)
Przeszukiwanie drzewa: Search(node, value)
Kolejka (Queue) w C++:
cpp
Copy code
// Deklaracja kolejki
#include <queue>
std::queue<TypDanych> mojaKolejka;

// Dodawanie elementu do kolejki
mojaKolejka.push(element);

// Usuwanie elementu z kolejki
mojaKolejka.pop();

// Odczytywanie elementu z przodu kolejki
mojaKolejka.front();

// Sprawdzanie, czy kolejka jest pusta
mojaKolejka.empty();
Lista Połączona (Linked List) w C++:
cpp
Copy code
// Deklaracja struktury węzła
struct Node {
    TypDanych dane;
    Node* nastepny;
};

// Tworzenie nowego węzła
Node* nowyWezel = new Node;

// Dodawanie elementu na koniec listy
DodajNaKoniec(lista, element);

// Usuwanie elementu z listy
UsunZListy(lista, element);

// Przechodzenie przez listę
while (aktualny != nullptr) {
    // Operacje na aktualnym elemencie
    aktualny = aktualny->nastepny;
}
Stos (Stack) w C++:
cpp
Copy code
// Deklaracja stosu
#include <stack>
std::stack<TypDanych> mojStos;

// Dodawanie elementu na wierzch stosu
mojStos.push(element);

// Usuwanie elementu z wierzchu stosu
mojStos.pop();

// Odczytywanie elementu z wierzchu stosu
mojStos.top();

// Sprawdzanie, czy stos jest pusty
mojStos.empty();
#include <iostream>

// Struktura reprezentująca osobę
struct Osoba {
    std::string imie;
    int wiek;
};

int main() {
    // Tworzenie obiektu struktury Osoba i wskaźnika do niego
    Osoba* wskaznikNaOsobe = new Osoba;

    // Ustawianie danych za pomocą operatora '->'
    wskaznikNaOsobe->imie = "Jan";
    wskaznikNaOsobe->wiek = 25;

    // Wyświetlanie danych
    std::cout << "Imię: " << wskaznikNaOsobe->imie << ", Wiek: " << wskaznikNaOsobe->wiek << std::endl;

    // Zwolnienie pamięci przydzielonej na obiekt
    delete wskaznikNaOsobe;

    return 0;
}
Powyższy program ilustruje:

Deklarację struktury Osoba, która zawiera dwa pola: imie (typu std::string) i wiek (typu int).
Utworzenie dynamicznego obiektu struktury Osoba za pomocą operatora new, co zwraca wskaźnik do tego obiektu.
Ustawienie danych wewnątrz obiektu za pomocą operatora ->.
Wyświetlenie danych za pomocą operatora ->.
Zwolnienie pamięci przydzielonej dla obiektu struktury Osoba za pomocą operatora delete.
Operator -> jest skrótem od (*wskaznik)., co pozwala na dostęp do pól struktury, gdy mamy do czynienia z wskaźnikiem na ten obiekt. W ten sposób ułatwia operacje na dynamicznie alokowanych strukturach czy klasach.
// ROZWIĄZANIE KONIEC
