// ----------- ZAD38 -----------
//(function) Dopisz do istniejącego kodu funkcję silnia tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma przyjmować liczbę i drukować silnię danej liczby tak jak na przykładzie:

//./silnia 5 ➞ WYDRUKUJE: 120

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
int silnia(int N) {
    if (N == 0) {
        return 1;
    } else {
        return N * silnia(N - 1);
    }
}
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int N = silnia (std::stoi(argv[1]));
	std::cout << N << '\n';
}