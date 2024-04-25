// ----------- ZAD30 -----------
//(string) Sprawdź czy słowo zawarte w parametrze jest palindromem – wydrukuj "true" jeśli jest lub "false" jeśli nie jest
//użyj klasy String, nie używaj wbudowanego odwracania stringów


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
    string word = argv[1];
    bool maciek = true; 
    for (int i = 0; i < word.length() / 2; i++) {
        // Porównujemy znaki od początku i od końca słowa.
        if (word[i] != word[word.length() - i - 1]) {
            maciek = false;
            break; 
        }
    }

    if (maciek) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

// ROZWIĄZANIE KONIEC
