// ----------- ZAD34 -----------
//(function) Napisz program, który przyjmie w argumentach dwie liczby, porówna je i wyświetli maksimum.
//Zadeklaruj funkcję o nazwie max_two, która porównuje liczby i zwraca maksimum.
//./max 1 2 ➞ WYDRUKUJE: 2


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;

int max_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main(int argc, char** argv) {
    int num1 = std::stoi(argv[1]);
    int num2 = std::stoi(argv[2]);
    int wynik = max_two(num1, num2);
    cout << wynik << endl;
    return 0;
}

// ROZWIĄZANIE KONIEC
