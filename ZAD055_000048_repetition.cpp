// ----------- ZAD48 -----------
//(repetition) (powtórka) Dopisz do istniejącego kodu funkcję "is_123" oraz "is_not" tak aby program drukował wskazany wynik
//is_123 ma sprawdzać czy przekazana tablica posiada po kolei elementy: 1, 2, 3
//is_not ma zanegować argument
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//./fun 1 1 1 1 ➞ WYDRUKUJE: 0 1 0
//./fun 0 0 0 0 ➞ WYDRUKUJE: 0 1 1
//./fun 0 1 2 3 ➞ WYDRUKUJE: 1 0 1

#include <iostream>
// ROZWIĄZANIE POCZATEK
using namespace std;

bool is_123(int argc, int tab[]){
    for(int i=0; i < argc-2; i++) {
        if (tab[i] == 1 && tab[i+1] == 2 && tab[i+2] == 3) {
            return true;
        }
    }
    return false;
}
bool is_not(bool value) {
    return !value;
}
//18 rysowanie
//25.10 sekwencje/ binarne/ karo
//27.10 stringi
//08.10 macierze / funkcje / potegi/ silnia/heppo hello
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int args[argc - 1];
	for(int i = 1; i < argc; ++i) 
		args[i - 1] = std::stoi(argv[i]);
	std::cout << is_123(argc-1, args) << " " << is_not(is_123(argc-1, args)) << " " << is_not(args[0]);
}