// ----------- ZAD98 -----------
//(switch) Jako parametr będzie przekazana dwucyfrowa liczba, przy czym cyfry będą jako odzielne parametry. Napisz program który wydrukuje reprezentacje słowną przekazanej liczby
//Nalerzy użyć switch-case

//./parametr 2 1 ➞ WYDRUKUJE: "dwadzieścia jeden"
//./parametr 4 2 ➞ WYDRUKUJE: "czterdzieści dwa"
//./parametr 1 1 ➞ WYDRUKUJE: "jedenaście"


// ROZWIĄZANIE POCZATEK
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    cout << "W postaci słownej: ";

    switch (a) {
        case 1:
            switch(b) {
                case 0:
                    cout << "dziesięć";
                    break;
                case 1:
                    cout << "jedenaście";
                    break;
                case 2:
                    cout << "dwanaście";
                    break;
                case 3:
                    cout << "trzynaście";
                    break;
                case 4:
                    cout << "czternaście";
                    break;
                case 5:
                    cout << "piętnaście";
                    break;
                case 6:
                    cout << "szesnaście";
                    break;
                case 7:
                    cout << "siedemnaście";
                    break;
                case 8:
                    cout << "osiemnaście";
                    break;
                case 9:
                    cout << "dziewiętnaście";
                    break;
                default: break;
            }
            break;
        case 2:
            cout << "dwadzieścia ";
            break;
        case 3:
            cout << "trzydzieści ";
            break;
        case 4:
            cout << "czterdzieści ";
            break;
        case 5:
            cout << "pięćdziesiąt ";
            break;
        case 6:
            cout << "sześćdziesiąt ";
            break;
        case 7:
            cout << "siedemdziesiąt ";
            break;
        case 8:
            cout << "osiemdziesiąt ";
            break;
        case 9:
            cout << "dziewięćdziesiąt ";
            break;
        default: break;
    }

    if (a != 1) {
        switch (b) {
            case 1:
                cout << "jeden";
                break;
            case 2:
                cout << "dwa";
                break;
            case 3:
                cout << "trzy";
                break;
            case 4:
                cout << "cztery";
                break;
            case 5:
                cout << "pięć";
                break;
            case 6:
                cout << "sześć";
                break;
            case 7:
                cout << "siedem";
                break;
            case 8:
                cout << "osiem";
                break;
            case 9:
                cout << "dziewięć";
                break;
            default: break;
        }
    }

    cout << endl;
    return 0;
}

// ROZWIĄZANIE KONIEC
