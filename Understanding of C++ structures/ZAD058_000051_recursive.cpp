// ----------- ZAD51 -----------
//(recursive) Zrób zadanie 19 używając rekurencji, nie używaj pętli
//Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje z gwiazdek Krzyż świętego Andrzeja o szerokości N

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
void lol(int N, int x, int y){
	if(y>=N){
		++x;
		y=0;
		std::cout << std::endl;
	}
	if(x>=N)
		return;
	std::cout << (x==y || x== N-y-1 ? "*" : " ");
	lol(N,x,++y);
}
int main(int argc,char** argv){
	int N = std::stoi(argv[1]);
	lol(N,0,0);
}
// ROZWIĄZANIE KONIEC
