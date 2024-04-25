// ----------- ZAD19 -----------
//(loop) Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje z gwiazdek Krzyż świętego Andrzeja o szerokości N

//./andrzej 4 ➞ WYDRUKUJE: 
//	*  *
//	 **
//	 **
//	*  *
//./andrzej 3 ➞ WYDRUKUJE: 
//	* *
//	 *
//	* *


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int N = std::atoi(argv[1]);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ( i == j || i + j == N - 1) {
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
