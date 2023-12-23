// Write a program that takes an integer from the parameters and prints the number one greater. Print the result to standard output.
// Example:
// ./program 2345 ➞ PRINTS: "2345"
// ./program -1000 ➞ PRINTS: "-999"
#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int number = std::stoi(argv[1]);
    cout << number + 1;
}