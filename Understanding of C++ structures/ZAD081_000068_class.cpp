// ----------- ZAD68 -----------
//(class) Do klasy Node z poprzedniego zadania (67) dodajmy klasę listy powiązanej LinkedList

//Dodaj do klasy LinkedList metodę getSize(), która zwraca rozmiar listy powiązanej,
//tak aby podany w przykładzie program zadziałał
//(rozwiązaniem jest tylko brakujący kod)

//./size ➞ WYDRUKUJE:
//Rozmiar listy: 3
//Rozmiar listy nie zmienil sie: 3

#include <iostream>

class Node {
	private:
	int value;
	Node* next;

	public:
	Node(int value, Node* next) {
		this->value=value;
		this->next=next;
	}
	int getValue() {
		return value;
	}
	Node* getNext() {
		return next;
	}
};

class LinkedList {
private: Node * head = nullptr;
public:
// Destruktor
~LinkedList() {
	Node * current = head;
	while (current != nullptr) {
	Node * next = current -> getNext();
	delete current;
	current = next;
  }
}

// Metoda dodająca element na początek listy
void addToFront(int value) {
	head = new Node(value, head);
}
// ROZWIĄZANIE POCZATEK
	int getSize(){
      int size = 0;
      Node* current = head;
      while(current != nullptr){
        Node* next = current -> getNext();
        size++;
        current = next;
      }
      return size;
    }
// ROZWIĄZANIE KONIEC
};

int main() {
	LinkedList list;
	list.addToFront(5);
	list.addToFront(10);
	list.addToFront(15);

	std::cout << "Rozmiar listy: " << list.getSize() << std::endl;
	std::cout << "Rozmiar listy nie zmienil sie: " << list.getSize() << std::endl;

	return 0;
}