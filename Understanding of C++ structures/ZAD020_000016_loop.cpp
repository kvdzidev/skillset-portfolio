// ----------- ZAD16 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę naturalną w, reprezentującą długość ramienia. Wydrukuj trójkąt prostokątny równoramienny z gwiazdek o wymiarze podanym w parametrze

//./rectangulartriangle 3 ➞ WYDRUKUJE: 
//*
//**
//***


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
    int w = std::atoi(argv[1]);
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}



// ROZWIĄZANIE KONIEC
