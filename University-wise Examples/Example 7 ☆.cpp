//Write a program that takes N parameters and then prints as many asterisks as the value of N. 
//Print the result to standard output.
#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n =0;
    for(int i=0; i < argc-1;i++)
        cout << "*";
}