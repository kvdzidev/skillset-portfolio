// ----------- ZAD52 -----------
//(recursive) Zrób zadanie 24 używając rekurencji
//Napisz program, który wydrukuje kwadratową macierz z zerami na głównej przekątnej, jedynkami tuż nad i pod główną przekątną, dalej dwójkami itd. Wielkość macierzy ma być podowana w parametrze programu

//./matrix 8 ➞ WYDRUKUJE:
//0 1 2 3 4 5 6 7
//1 0 1 2 3 4 5 6
//2 1 0 1 2 3 4 5
//3 2 1 0 1 2 3 4
//4 3 2 1 0 1 2 3 
//5 4 3 2 1 0 1 2
//6 5 4 3 2 1 0 1  
//7 6 5 4 3 2 1 0 



// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
using namespace std;
void fillMatrix(int i, int j, int m) {
    if (i < m) {
        if (j < m) {
            int value;
            if (i > j) {
                value = i - j;
            } else {
                value = j - i;
            }
            cout << value << " ";
            fillMatrix(i, j + 1, m); 
        } else {
            cout << endl;
            fillMatrix(i + 1, 0, m);
        }
    }
}

int main(int argc, char** argv) {
    int m = std::atoi(argv[1]);
    fillMatrix(0, 0, m);
    return 0;
}

// ROZWIĄZANIE KONIEC
