// ----------- ZAD99 -----------
//(loop) Jako parametr będzie przekazana liczba binarna, przy czym poszczególne cyfry będą jako odzielne parametry. Napisz program który wydrukuje reprezentację dziesiętną przekazanej liczby
//Nie używaj pow ani math

//./parametr 1 0 0 ➞ WYDRUKUJE: "4"
//./parametr 1 0 1 0 1 1 1 0 1 0 1 ➞ WYDRUKUJE: "1397"


// ROZWIĄZANIE POCZATEK
#include<iostream>

int main(int argc,char** argv) {
	int unbinary = 0;
	for(int i=1,x=1;i<argc;i++,x*=2)
		unbinary += std::stoi(argv[argc-i]) * x;
		std::cout << unbinary << "\n";
}	
// ROZWIĄZANIE KONIEC
