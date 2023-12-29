//Write a code that will check whether a word passed as a parameter is a palindrome using a
//String class without using the built-in string reversal function.
//It prints "true" if it is a palindrome and "false" otherwise:
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
    //if both if's are not met with requirements just continue the function
    // recursion 
    return isPalindrome(word, start + 1, end - 1);
}
int main(int argc, char* argv[]) {
    string testWord = argv[1];
    bool isPalindromic = isPalindrome(testWord, 0, testWord.length() - 1);
    cout << std::boolalpha << isPalindromic << endl; //boolalpha changes 0/1 to false/true (purely visual function)
    return 0;
}

