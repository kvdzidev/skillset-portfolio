//Write a program that prints all received parameters separated by spaces. Print the result to standard output.
#include <iostream>
using namespace std;
int main(int argc,char** argv){
    for(int i=1; i < argc; i++){
        cout << argv[i] << " ";
    }
}
