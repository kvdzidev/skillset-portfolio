// ----------- ZAD90 -----------
//(arrays) Jako parametr przekazana jest liczba binarna
//Wydrukuj reprezentację dziesiętną przekazanej w argumecie liczby

//./binary 1011 ➞ WYDRUKUJE: "11"


// ROZWIĄZANIE POCZATEK
#include <iostream>
int main(int argc,char** argv) {
  std::string binary = argv[1];
  int tmp =0;
    
  for(int i=0;i<binary.length();i++) {
    tmp = tmp*2+(binary[i] - '0');
  }
  std::cout << tmp << std::endl;
}


// ROZWIĄZANIE KONIEC
