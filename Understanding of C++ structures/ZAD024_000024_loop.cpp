// ----------- ZAD24 -----------
//(loop) Napisz program, który wydrukuje kwadratową macierz z zerami na głównej przekątnej, jedynkami tuż nad i pod główną przekątną, dalej dwójkami itd. Wielkość macierzy ma być podowana w parametrze programu

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
using namespace std;
int main(int argc, char** argv) {
    int m = std::atoi(argv[1]);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            int value = 0;
            if ( i == j ) {
                value = 0;
            } else if(i > j){
                value = i-j;
            } else {
                value = j-i;
            }
            cout << value << " ";

        }
        cout << endl;
    }
    return 0;
}


// ROZWIĄZANIE KONIEC
