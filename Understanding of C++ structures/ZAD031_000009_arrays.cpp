// ----------- ZAD9 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Sprawdź i wydrukuj ile razy w tablicy parametrów występuje sekwencja 1 2 1

//./seq 0 1 2 1 2 1 5 ➞ WYDRUKUJE: "2"
//./seq 9 9 9 1 2 1 1 2 1 9 9 1 2 1 ➞ WYDRUKUJE: "3"


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc,char** argv){
    int liczydlo = 0;
    for(int i = 0; i < argc-2; i++) {
        int uno = std::atoi(argv[i]);
        int dos = std::atoi(argv[i+1]);
        int tres = std::atoi(argv[i+2]);
        if (uno==1 && dos==2 && tres==1) {
            liczydlo++;
        }
    }
    cout << liczydlo << endl;
}
// ROZWIĄZANIE KONIEC
