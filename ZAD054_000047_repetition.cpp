// ----------- ZAD47 -----------
//(repetition) (powtórka) Napisz program, który zamienia każdą literę w danym łańcuchu znaków przekazanym w agrumencie na następującą po niej literę alfabetu (tj. a staje się b, p staje się q, z staje się a)
//Przykład:

//./string_inc czy1Ja2wieM ➞ WYDRUKUJE: daz1Kb2xjfN


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
using namespace std;
int main(int argc,char** argv){
    string ciag = argv[1];
    string lanc ="";
    for(int i =0;i<ciag.length();i++){
        char znak = ciag[i];
        if(isalpha(znak)){
            if(znak == 'z' or znak == 'Z'){
                znak -= 25;
                lanc += znak;
            } else {
                znak += 1;
                lanc += znak;
            }
        }else{
            lanc +=znak;
        }
    }
    cout << lanc << endl;
}
// ROZWIĄZANIE KONIEC
