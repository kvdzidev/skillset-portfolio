// ----------- ZAD62 -----------
//(dataclass) 
//Napisz funkcję liczącą różnicę między dwoma godzinami przedstawionymi
//jako struktura "czas" i zwracająca jako wynik strukturę czas
//(rozwiązaniem jest tylko brakujący kod)

//./przelicznik 5 21 6 31 ➞ WYDRUKUJE: 
//Różnica między
//5:21
//a
//6:31
//to
//1:10
//		


#include <iostream>

struct czas
{
	int godziny; 
	int minuty;
};

// ROZWIĄZANIE POCZATEK
czas roznica(czas t1, czas t2) {
    czas wynik;
    int minutki1 = t1.godziny * 60 + t1.minuty;
    int minutki2 = t2.godziny * 60 + t2.minuty;
    int roznica;
    if (minutki1 > minutki2){
        roznica = minutki1 - minutki2;
    } else {
        roznica = minutki2 - minutki1;
    }
    wynik.godziny = roznica / 60;
    wynik.minuty = roznica % 60;

    return wynik;
}
// ROZWIĄZANIE KONIEC

int main(int argc, char *argv[]){
	if(argc != 5){
		std::cout << "Jako argumenty podaj cztery liczby";
		return 1;
	}

	czas t1, t2, difference;
	t1.godziny = std::stoi(argv[1]);
	t1.minuty = std::stoi(argv[2]);

	t2.godziny = std::stoi(argv[3]);
	t2.minuty = std::stoi(argv[4]);

	
	difference = roznica(t1, t2);
	
	std::cout << "Różnica między" << std::endl;
	std::cout << t1.godziny << ":" << t1.minuty <<  std::endl;
	std::cout << "a" << std::endl;
	std::cout << t2.godziny << ":" << t2.minuty << std::endl;
	std::cout << "to" << std::endl;
	std::cout << difference.godziny << ":" << difference.minuty << std::endl;

	return 0;
}