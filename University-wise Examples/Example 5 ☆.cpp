//Write a program that takes two numbers as parameters and adds them together. 
//Print the result to standard output.
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    cout << std::stoi(argv[1]) + std::stoi(argv[2]) << endl;
    return 0;
}