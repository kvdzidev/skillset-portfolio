// ----------- ZAD18 -----------
//(if) Jako parametry zostaną przekazane trzy liczby całkowite
//Napisz program, który posortuje rosnąco trzy liczby całkowite przekazane jako argument programu
//Nie używaj pętli

//./minisort 5 -2 1 ➞ WYDRUKUJE: "-2 1 5"


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a = stoi(argv[1]);
	int b = stoi(argv[2]);
	int c = stoi(argv[3]);
	if(a < b && a < c) {
		cout << a << " ";
		if(b < c) {
			cout << b << " " << c ;
		} else {
			cout << c << " " << b ;
		}
	}
	if(b < a && b < c) {
		cout << b << " ";
		if (a < c) {
			cout << a << " " << c ;
		} else {
			cout << c << " " << a ;
		}
	}
	if(c < a && c < b) {
		cout << c << " " ;
		if (a < b) {
			cout << a << " " << b ;
		} else {
			cout << b << " " << a ;
		}
	}
}
// ROZWIĄZANIE KONIEC
