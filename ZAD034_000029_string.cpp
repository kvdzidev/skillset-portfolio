// ----------- ZAD29 -----------
//(string) wydrukuj od końca słowo zawarte w pierwszym parametrze
//użyj klasy String
//./rev abcd ➞ WYDRUKUJE: dcba


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
    string word = argv[1];
    reverse(word.begin(), word.end());
    cout<<"\n"<<word;
    return 0;
}

// ROZWIĄZANIE KONIEC
