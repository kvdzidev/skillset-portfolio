// ----------- ZAD45 -----------
//(repetition) (powtórka) Jako argument programu będzie podana liczba naturalna N.
//Program ma wydukukować największą <a href="https://pl.wikipedia.org/wiki/Liczba_doskona%C5%82a">liczbę doskonałą</a> mniejszą od N
//Dopisz funkcję perfect która znajdzie taką liczbę
//Nie używaj drukowania


//./doskonale 30 ➞ WYDRUKUJE: 28

#include <iostream>
// ROZWIĄZANIE POCZATEK
void perfect(int& liczba) {
    int najdosk = -1;
    for(int i = liczba - 1; i > 0; i--){
        int sumadziel= 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sumadziel += j;
            }
        }
        if(sumadziel == i){
            najdosk = i;
            break;
        }
    }
    liczba = najdosk;
}
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int t = std::stoi(argv[1]);
	perfect(t);
	std::cout << t;
}