// ----------- ZAD4 -----------
//(io) Napisz program, który pobierze dwie liczby z klawiatury i doda je do siebie. Wynik wydrukuj na standardowe wyjście. Podawanie liczb powinno być odzielone naciśnięciem enter

//./sum ➞ 
//	Podaj liczbę: 2[ENTER]
//	Podaj kolejną liczbę: 4[ENTER]
//	Suma to 6


// ROZWIĄZANIE POCZATEK
#include <iostream>
//argc dlugosc
//argv ilosc
using namespace std;
int main(int argc, char** argv) {
	int x;int y;
	std::cin >> x >> y;
	std::cout << x+y;
	
	return 0;
}

// ROZWIĄZANIE KONIEC
