// ----------- ZAD25 -----------
//(loop) Napisz program, który wyświetli za pomocą cyfr wzór w postaci trójkąta prostokątnego z wyrównaniem do prawej tak jak podano na przykładzie. Parametrem programu jest wysokość trójkąta
//./halftree 5 ➞ WYDRUKUJE:
//    1
//   21
//  321
// 4321
//54321


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int m = std::atoi(argv[1]);
    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= m - i; k++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) { 
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

// ROZWIĄZANIE KONIEC
