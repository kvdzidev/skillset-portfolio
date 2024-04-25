// ----------- ZAD95 -----------
//(types) Napisz program, który pobierze z parametrów liczbę RZECZYWISĄ i wydrukje liczbę o jeden większą. Wynik wydrukuj na standardowe wyjscie.

//./parametr 2345.123 ➞ WYDRUKUJE: "2346.123"
//./parametr -1000.9999 ➞ WYDRUKUJE: "-1000"


// ROZWIĄZANIE POCZATEK
#include <iostream>
int main(int argc,char** argv){
	double q = std::stod(argv[1]);
	std::cout << q + 1;
}


// ROZWIĄZANIE KONIEC
