// ----------- ZAD7 -----------
//(loop) Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje tyle gwiadek ile wynosi N. Wymiar nie może być mniejszy niż 0. Wynik wydrukuj na standardowe wyjście

//./allstars 4 ➞ WYDRUKUJE: "****"


// ROZWIĄZANIE POCZATEK
//std::cout << 
//std:cin >>
#include <iostream>
int main(int argc, char** argv){
	int n;
	n = std::stoi(argv[1]);
	for(int i=0;i<n;i++ )
		std::cout << "*";
		
	return 0;
}


// ROZWIĄZANIE KONIEC
