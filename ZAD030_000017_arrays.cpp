// ----------- ZAD17 -----------
//(arrays) Napisz program, który wydrukuje sumę wszystkich PARZYSTYCH liczb przekazanych jako argumenty 
//		
//Przykład:
//	./even 1 2 3 4 ➞ WYDRUKUJE: "6"
//	./even 1 1 1 1 ➞ WYDRUKUJE: "0"
//	./even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc,char** argv) {
    int liczydlo =0;
    for(int i = 1; i < argc; i++){
        int liczba = std::stoi(argv[i]);
        if (liczba%2==0) {
            liczydlo = liczydlo + liczba;
        }
    }
    cout << liczydlo << endl;
}



// ROZWIĄZANIE KONIEC
