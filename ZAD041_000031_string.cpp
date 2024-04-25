// ----------- ZAD31 -----------
//(string) Strasznie nie lubię węży! Dlatego nie podoba i się że ci pajtonowcy piszą wszytko Snake casem.
//Napisz mi program który przekonwertuje SnakeCase do CamelCase.
//Przekonwertuj pierwszy argument programu, napisany snakecase do CamelCase i wydrukuj.

//Przykład 
//./snakes-sucks "is_modal_open" ➞ WYDRUKUJE: "isModalOpen"
//./snakes-sucks "follow_the_white_rabbit" ➞ WYDRUKUJE: "followTheWhiteRabbit"


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

    string snakeCase = argv[1];
    string camelCase;

    bool capitalizeNext = false;

    for (char c : snakeCase) {
        if (c == '_') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += toupper(c);
            capitalizeNext = false;
        } else {
            camelCase += c;
        }
    }

    cout << camelCase << endl;

    return 0;
}

// ROZWIĄZANIE KONIEC
