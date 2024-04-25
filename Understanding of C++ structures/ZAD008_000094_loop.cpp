// ----------- ZAD94 -----------
//(loop) Napisz program, który pobierze N parametrów, a następnie wydrukuje tyle gwiadek ile wynosi N. Wynik wydrukuj na standardowe wyjście

//./allstars to sa parametry ➞ WYDRUKUJE: "***"


// ROZWIĄZANIE POCZATEK
#include <iostream> 
using namespace std;
int main(int argc, char** argv){
  for(int i = 0; i < argc-1; i++){
    cout << "*";
  }
}
// ROZWIĄZANIE KONIEC
