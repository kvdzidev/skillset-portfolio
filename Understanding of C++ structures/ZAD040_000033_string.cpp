// ----------- ZAD33 -----------
//(string) Ze stringów przekazanych w argumentach wydrukuj po spacjach tylko te w których wszystkie literki są takie same.


//Przykład:
//	./filter "aaa" "bbb" "ccc" ➞ WYDRUKUJE: "aaa bbb ccc"
//	./filter "a" "bc" "dd" ➞ WYDRUKUJE: "a dd"
//	./filter "hey" ➞ WYDRUKUJE: nic nie wydrukuje


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) { // indeksy wyrazow
        string x = string(argv[i]);
        bool maciek = true; // czy allsame

        for (int j = 1; j < x.length(); j++) { // znaki w ciagu (literki w wyrazach)
            if (x[0] != x[j]) { // Jeśli znak jest różny od pierwszego znaku
                maciek = false; 
                break; // Przerywamy pętlę, bo nie ma potrzeby dalszego sprawdzania
            }
        }
        if (maciek) { 
            cout << x << ' '; 
        }
    }
    return 0;
}

// ROZWIĄZANIE KONIEC
