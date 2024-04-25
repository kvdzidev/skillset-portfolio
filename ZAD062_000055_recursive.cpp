// ----------- ZAD55 -----------
//(recursive) Zrób zadanie 30 używając rekurencji
//Sprawdź czy słowo zawarte w parametrze jest palindromem – wydrukuj "true" jeśli jest lub "false" jeśli nie jest
//użyj klasy String, nie używaj wbudowanego odwracania stringów


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string& word, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (word[start] != word[end]) {
        return false;
    }
    // Rekurencyja
    return isPalindrome(word, start + 1, end - 1);
}

int main(int argc, char* argv[]) {
    string testWord = argv[1];
    bool isPalindromic = isPalindrome(testWord, 0, testWord.length() - 1);

    cout << std::boolalpha << isPalindromic << endl;

    return 0;
}

// ROZWIĄZANIE KONIEC
