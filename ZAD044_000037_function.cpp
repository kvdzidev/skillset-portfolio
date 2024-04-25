// ----------- ZAD37 -----------
//(function) Napisz program, który potęguje liczby całkowite. 
//Aby to zrobić, zadeklaruj własną funkcję. 
//Funkcja powinna mieć sygnaturę:
//void mypow(int, int, int&);

//./pow 2 3 ➞ WYDRUKUJE: 8

void mypow(int, int, int&);
// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int podstawa = std::stoi(argv[1]);
    int wykladnik = std::stoi(argv[2]);
    int wynik;
    mypow(podstawa, wykladnik, wynik);
    cout << wynik << endl;
    return 0;
}
void mypow(int podstawa, int wykladnik, int &wynik) {
    wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
}

// ROZWIĄZANIE KONIEC
