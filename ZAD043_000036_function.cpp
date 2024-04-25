// ----------- ZAD36 -----------
//(function) Napisz program, który potęguje liczby całkowite. 
//Liczba i potęga są podane w argumentach, wynik ma być wydrukowany na standardowe wyjście. 
//Aby to zrobić, zadeklaruj własną funkcję. Funkcja powinna mieć sygnaturę:
//int mypow(int, int);

//./pow 2 3 ➞ WYDRUKUJE: 8

int mypow(int, int);
// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int liczba = std::stoi(argv[1]);
    int potega = std::stoi(argv[2]);
    int wynik = mypow(liczba, potega);
    cout << wynik << endl;
    return 0;
}
int mypow(int liczba, int potega) {
    int wynik = 1;
    for (int i = 0; i < potega; i++) {
        wynik *= liczba;
    }
    return wynik;
}

// ROZWIĄZANIE KONIEC
