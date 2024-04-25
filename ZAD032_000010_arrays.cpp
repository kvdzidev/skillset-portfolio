// ----------- ZAD10 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Wydrukuj indeks pierwszego wystąpienia pod rząd co najmniej trzech wartości większych od 1000 w tablicy parametrów

//./gt 1 1 1 1 1111 1111 1 11 1111 1111 1111 1111 1 ➞ WYDRUKUJE: "8"



// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int pierwszyIndeks = 0; // Indeks pierwszego wystąpienia co najmniej trzech wartości większych od 1000.
    for (int i = 1; i < argc; i++) {
        int liczba = std::atoi(argv[i]);
        if(i >= 3){
            if (liczba > 1000 && std::atoi(argv[i - 1]) > 1000 && std::atoi(argv[i - 2]) > 1000) {
                pierwszyIndeks = i-2;
                break;
            }
        }
    }
    cout << pierwszyIndeks - 1<< endl;
}

// ROZWIĄZANIE KONIEC
