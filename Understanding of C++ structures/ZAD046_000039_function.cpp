// ----------- ZAD39 -----------
//(function) Dopisz do istniejącego kodu funkcję silnia tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma przyjmować liczbę i drukować silnię danej liczby tak jak na przykładzie:

//./silnia 5 ➞ WYDRUKUJE: 120

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
void silnia(int N, int &wynik) {
    wynik = 1; 

    for (int i = 2; i <= N; ++i) {
        wynik *= i;
    }
}
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int N = 0;
	silnia (std::stoi(argv[1]), N);
	std::cout << N << '\n';
}