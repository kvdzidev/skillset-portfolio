// ----------- ZAD15 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę rzeczywistą r, reprezentującą promień. Wydrukuj koło z gwiazdek o promieniu podanym w parametrze.
//Nalerzy wykorzystać odległość punktu od punktu lub równanie okręgu (na to samo wyjdzie)
//Wydrukuj dwie gwiazdki poziomo na każdą jednostkę, żeby było bardziej okrągłe


//	./circle 2.5 ➞ WYDRUKUJE: 
//  ******  
//**********
//**********
//**********
//  ******  

//	./circle 3.5 ➞ WYDRUKUJE: 
//    ******	
//  **********  
//**************
//**************
//**************
//  **********  
//    ******	

//	./circle 4.5 ➞ WYDRUKUJE: 
//    **********	
//  **************  
//******************
//******************
//******************
//******************
//******************
//  **************  
//    **********  


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
    double r = std::stod(argv[1]);  // promien
    int centerX = std::round(r);    // (x, )
    int centerY = std::round(r);    // ( ,y)

    // poruszanie sie po wspolrzednych w okregu ktory iteruje spacje
    for (int y = 1; y <= 2 * r; ++y) {
        for (int x = 1; x <= 2 * r; ++x) {
            double distance = std::sqrt(pow(x - centerX, 2) + pow(y - centerY, 2));  // Oblicz odległość punktu od środka okręgu.
            char symbol = (distance <= r) ? '*' : ' ';  // czy punkt w srodku i narysuj
            cout << symbol << symbol;
        }
        cout << endl;
    }
    return 0;
}

// ROZWIĄZANIE KONIEC
