// ----------- ZAD12 -----------
//(loop) Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj prostokąt z gwiazdek o wymiarach podanych w parametrach

//./rectangle 3 4 ➞ WYDRUKUJE: 
//***
//***
//***
//***


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc,char** argv) {
    int w = std::stoi(argv[1]);
    int h = std::stoi(argv[2]);
    for (int width=0; width < h; width++){
        for (int height=0;height <w; height++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



// ROZWIĄZANIE KONIEC
