// ----------- ZAD23 -----------
//(loop) Wydrukuj po spacjach <a href="https://pl.wikipedia.org/wiki/Permutacja#Permutacja_bez_powt%C3%B3rze%C5%84">permutacje bez powtórzeń</a> dla cyfr 1, 2, 3, 4. 
//Permutacją bez powtórzeń zbioru złożonego z n różnych elementów nazywamy każdy n wyrazowy ciąg utworzony ze wszystkich wyrazów zbioru.
//Nie korzystaj z rekurencji.

//Dla liczb 1, 2, 3 było by to:
//123 132 213 231 312 321 



// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;

int main() {
    int ilosc = 4; // Liczba cyfr
    int arg[4] = {1, 2, 3, 4}; // Cyfry

    for (int i = 0; i < ilosc; i++) { // Pętla zewnętrzna dla pierwszej cyfry
        for (int j = 0; j < ilosc; j++) { // Pętla wewnętrzna dla drugiej cyfry
            if (i != j) { // Sprawdzamy, czy druga cyfra jest różna od pierwszej
                // Pierwsza cyfra permutacji
                int pierwsza = arg[i];
                // Druga cyfra permutacji
                int druga = arg[j];

                // Pozostałe cyfry permutacji
                for (int k = 0; k < ilosc; k++) { // Pętla dla trzeciej cyfry
                    if (k != i && k != j) { // Sprawdzamy, czy trzecia cyfra jest różna od pierwszej i drugiej
                        int trzecia = arg[k];
                        // Ostatnia cyfra permutacji
                        int czwarta;
                        for (int l = 0; l < ilosc; l++) { // Pętla dla czwartej cyfry
                            if (l != i && l != j && l != k) { // Sprawdzamy, czy czwarta cyfra jest różna od pozostałych
                                czwarta = arg[l];
                                // Wydrukuj permutację
                                cout << pierwsza << druga << trzecia << czwarta << " ";
                            }
                        }
                    }
                }
            }
        }
    }

    cout << endl;
    return 0;
}

// ROZWIĄZANIE KONIEC
