// ----------- ZAD35 -----------
//(function) Program ma przyjmować liczbę i drukować macież według poniższego przykładu:
//./ring 8 ➞ WYDRUKUJE:
//0 1 2 3 4 5 6 7
//7 0 1 2 3 4 5 6
//6 7 0 1 2 3 4 5
//5 6 7 0 1 2 3 4
//4 5 6 7 0 1 2 3 
//3 4 5 6 7 0 1 2
//2 3 4 5 6 7 0 1  
//1 2 3 4 5 6 7 0

//Do poniższego programu dopisz funkcję drukuj_linie tak aby program drukował spodziewany wynik, nie urzywając dodatkowych coutów

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
std::string drukuj_linie(int numer_linii, int N) {
    std::string linia;
    for (int i = 0; i < N; i++) {
        int liczba = (i - numer_linii + N) % N;
        linia += std::to_string(liczba);
        if (i < N - 1) {
            linia += " ";
        }
    }
    return linia;
}
// ROZWIĄZANIE KONIEC
int main (int argc, char ** argv){
	for(int i=0; i<std::stoi(argv[1]); ++i)
		std::cout << drukuj_linie(i, std::stoi(argv[1])) << "\n";
}