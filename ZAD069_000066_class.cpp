// ----------- ZAD66 -----------
//(class) 
////Napisz klasę Person tak aby program działał
////(rozwiązaniem jest tylko brakujący kod)

////./osoba ➞ WYDRUKUJE:
////Osoba: Jan Kowalski
////Wiek: 30



#include <iostream>
#include <string>

// ROZWIĄZANIE POCZATEK
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    Person(string imie_name, string nazwisko_name, int pipul_age) {
        name = imie_name + " " + nazwisko_name;
        age = pipul_age;
    }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};

// ROZWIĄZANIE KONIEC

int main() {
	// Tworzenie obiektu osoby o imieniu Jan, nazwisku Kowalski i wieku 30
	Person person("Jan", "Kowalski", 30);

	// Wypisywanie imienia i nazwiska osoby
	std::cout << "Osoba: " << person.getName() << std::endl;

	// Wypisywanie wieku osoby
	std::cout << "Wiek: " << person.getAge() << std::endl;

	return 0;
}