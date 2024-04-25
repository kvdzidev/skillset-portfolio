// ----------- ZAD50 -----------
//(recursive) Zrób zadanie 9 używając rekurencji, nie używaj pętli
//Jako parametry zostaną przekazane liczby całkowite
//Sprawdź i wydrukuj ile razy w tablicy parametrów występuje sekwencja 1 2 1

//./seq 0 1 2 1 2 1 5 ➞ WYDRUKUJE: "2"
//./seq 9 9 9 1 2 1 1 2 1 9 9 1 2 1 ➞ WYDRUKUJE: "3"


// ROZWIĄZANIE POCZATEK
//Zrób zadanie 9 używając rekurencji, nie używaj pętli
//Jako parametry zostaną przekazane liczby całkowite
//Sprawdź i wydrukuj ile razy w tablicy parametrów występuje sekwencja 1 2 1
//
//./seq 0 1 2 1 2 1 5 ➞ WYDRUKUJE: "2"
//./seq 9 9 9 1 2 1 1 2 1 9 9 1 2 1 ➞ WYDRUKUJE: "3"
#include <iostream>
using namespace std;

int seq(int argc, char** argv, int i){
	if(i>=argc-2)
		return 0;
    int uno = std::atoi(argv[i]);
    int dos = std::atoi(argv[i+1]);
    int tres = std::atoi(argv[i+2]);
    if (uno==1 && dos==2 && tres==1) 
        return seq(argc,argv,i+1) +1;
    return seq(argc,argv,i+1);
     
}
int main(int argc,char** argv){
    cout << seq(argc,argv,1) << endl;
}
// ROZWIĄZANIE KONIEC
