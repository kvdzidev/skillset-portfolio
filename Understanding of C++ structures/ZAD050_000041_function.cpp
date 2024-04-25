// ----------- ZAD41 -----------
//(function) Dopisz do istniejącego kodu funkcję podmien_literki tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma drukować string "heppo heppo"

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
char* podmien_literki(char* hel, char from, char to) {
    int length = sizeof(hel) / sizeof(hel[0]);
    for (int i = 0; i < length; i++) {
        if (hel[i] == from) {
            hel[i] = to;
        }
    }
    return hel;
}

// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	char s1[] = "hello";
	std::cout << podmien_literki (s1, 'l', 'p') << ' ';
	std::cout << s1 << '\n';
}