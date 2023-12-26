// Write a program that takes an integer from the keyboard and prints the number one greater. Print the result to standard output. Entering numbers should be separated by pressing Enter.
// Example:
// ./keys ➞ 
// 	Enter a number: 456[ENTER]
// 	Incremented value is 457
#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int input = 0;
    cin >> input;
    cout << input+1;
    return 0;
}
