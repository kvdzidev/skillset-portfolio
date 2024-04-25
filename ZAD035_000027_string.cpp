// ----------- ZAD27 -----------
//(string) Wydrukuj jego długość pierwszego parametru. Skorzystaj ze string aby <a href=https://cplusplus.com/reference/string/string/length/>okreslic dlugosc</a>


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
int main(int argc, char** argv) {
    std::string pierwszyParametr = argv[1]; // Konwersja pierwszego parametru na string
    int dlugosc = pierwszyParametr.length(); // Długość pierwszego parametru
    std::cout << dlugosc << std::endl;
}

// ROZWIĄZANIE KONIEC
