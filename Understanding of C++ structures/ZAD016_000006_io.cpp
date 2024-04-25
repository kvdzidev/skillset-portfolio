// ----------- ZAD6 -----------
//(io) Napisz program, który pobierze z parametru pin, następnie będzie prosił o wpisanie pinu do czasu aż urzytkownik wprowadzi pin podany w parametrze programu, wtedy wyswietli "Poprawny pin" i zakończy działanie programu

//./pass 1234 ➞ 
//	Podaj pin: 4321
//	Błędny pin
//	Podaj pin: 123
//	Błędny pin
//	Podaj pin: 1234
//	Poprawny pin


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv) {

    int pinpoprawny = std::atoi(argv[1]);
    cout << "Podaj pin: ";
    int wprowadzonyPin;

    while (true) {
        cin >> wprowadzonyPin;

        if (wprowadzonyPin == pinpoprawny) {
            cout << "Poprawny pin";
            break;
        } else {
            cout << "Błędny pin" << std::endl ;
        }
    }

    return 0;
}

// ROZWIĄZANIE KONIEC
