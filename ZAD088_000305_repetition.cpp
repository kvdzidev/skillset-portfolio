// ----------- ZAD305 -----------
//(repetition) Napisz program drukujący choinkę używając rekurencji
//Nie używaj pętli

//Program ma drukwać następujący wzór:

//./choinka 4 ➞ WYDRUKUJE: 
//      1
//    2 3
//  4 5 6
//7 8 9 10


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;

void inkrementujIWyswietl(int ostatniaLiczba, int ileRazyJeszczeWyswietlic) {
    if (ileRazyJeszczeWyswietlic == 0) {
        return;
    }
    cout << ostatniaLiczba << ' ';
    inkrementujIWyswietl(ostatniaLiczba + 1, ileRazyJeszczeWyswietlic - 1);
}

void drukujSpacje(int liczbaSpacji){
	cout << string(liczbaSpacji,' ');
}
void drukujChoinke(int aktualnyPoziom, int ostatniPoziom, int counter){
	if(aktualnyPoziom>ostatniPoziom){
		return;
	}
	drukujSpacje((ostatniPoziom - aktualnyPoziom)*2);
	inkrementujIWyswietl(counter,aktualnyPoziom);
	cout << endl ;
	counter += aktualnyPoziom;
	aktualnyPoziom++;
	drukujChoinke(aktualnyPoziom,ostatniPoziom, counter);
}
int main(int argc,char**argv){
	int number = stoi(argv[1]);
	drukujChoinke(1,number,1);
}
// ROZWIĄZANIE KONIEC
