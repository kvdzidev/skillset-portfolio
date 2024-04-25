// ----------- ZAD49 -----------
//(recursive) Zrób zadanie 17 używając rekurencji, nie używaj pętli
//Napisz program, który wydrukuje sumę wszystkich PARZYSTYCH liczb przekazanych jako argumenty 
//		
//Przykład:
//	./even 1 2 3 4 ➞ WYDRUKUJE: "6"
//	./even 1 1 1 1 ➞ WYDRUKUJE: "0"
//	./even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int sum(int argc, char** argv, int i){
	if(i>=argc)
		return 0;
	if(std::stoi(argv[i]) % 2 == 0)
		return sum(argc,argv,i+1) + stoi(argv[i]);
	return sum(argc,argv,i+1);
}
int main(int argc, char** argv){
	cout << sum(argc, argv,1);
}
// ROZWIĄZANIE KONIEC
