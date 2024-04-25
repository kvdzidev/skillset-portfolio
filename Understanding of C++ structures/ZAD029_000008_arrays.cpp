// ----------- ZAD8 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Zwróć indeks pierwszej liczby większej od 1000 w tablicy parametrów lub -1 jeśli takiej nie ma

//./find 100 101 1001 999 ➞ WYDRUKUJE: "2"
//./find 9999 ➞ WYDRUKUJE: "0"
//./find 1 2 3 ➞ WYDRUKUJE: "-1"


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
            int number = std::stoi(argv[i]);
            if (number > 1000) {
                cout << i - 1 << endl;
                return 0;
        }
    }
    cout << - 1 << endl;
}

// ROZWIĄZANIE KONIEC
