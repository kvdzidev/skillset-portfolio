// ----------- ZAD96 -----------
//(switch) Napisz program, który pobierze z pierwszego parametru numer miesiąca i używajac switch wydrukuje jego nazwe. Wynik wydrukuj na standardowe wyjscie.

//./parametr 1 ➞ WYDRUKUJE: "Styczeń"
//./parametr 2 ➞ WYDRUKUJE: "Luteń"


// ROZWIĄZANIE POCZATEK
#include <iostream>
int main(int argc,char** argv){
	int miesiac = std::stod(argv[1]);
	switch(miesiac){
		case 1:
			std::cout << "Styczeń";
			break;
		case 2:
			std::cout << "Luty";
			break;
		case 3:
			std::cout << "Marzec";
			break;
		case 4:
			std::cout << "Kwiecień";
			break;
		case 5:
			std::cout << "Maj";
			break;
		case 6:
			std::cout << "Czerwiec";
			break;
	    case 7:
			std::cout << "Lipiec";
			break;
	    case 8:
			std::cout << "Sierpień";
			break;
		case 9:
			std::cout << "Wrzesień";
			break;
		case 10:
			std::cout << "Październik";
			break;
		case 11:
			std::cout << "Listopad";
			break;
		case 12:
			std::cout << "Grudzień";
			break;
	}
}


// ROZWIĄZANIE KONIEC
