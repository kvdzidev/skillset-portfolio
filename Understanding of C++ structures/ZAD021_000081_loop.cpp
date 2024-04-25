// ----------- ZAD81 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę naturalną w, reprezentującą długość ramienia. Wydrukuj pusty w środku trójkąt prostokątny równoramienny z gwiazdek o wymiarze podanym w parametrze

//./rectangulartriangle 5 ➞ WYDRUKUJE: 
//*
//**
//* *
//*  *
//*****


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
    int w = std::atoi(argv[1]);
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= i; j++) {
            if(j == i or j==1 or j == w or i ==w ) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

// ROZWIĄZANIE KONIEC
