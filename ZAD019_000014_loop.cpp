// ----------- ZAD14 -----------
//(loop) Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj pusty w środku prostokąt z gwiazdek o wymiarach podanych w parametrach

//./emptyrectangle 5 4 ➞ WYDRUKUJE: 
//*****
//*   *
//*   *
//*****


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc,char** argv) {
    int wpodana = std::stoi(argv[1]);
    int szpodana = std::stoi(argv[2]);
    for (int wysokosc=0; wysokosc < szpodana; wysokosc++){
        for (int szerokosc=0;szerokosc <wpodana; szerokosc++){
            if(wysokosc==0 or wysokosc == szpodana -1 or szerokosc == 0 or szerokosc == wpodana-1) {
                cout << "*";
            }else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}



// ROZWIĄZANIE KONIEC
