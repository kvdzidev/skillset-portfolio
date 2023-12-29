//Write a program that will print the sum of even numbers which were given in the parameters
//Example:
//./even 1 2 3 4 ➞ WYDRUKUJE: "6"
//./even 1 1 1 1 ➞ WYDRUKUJE: "0"
//./even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"

#include <iostream>
using namespace std;
int summingrecursive(int argc, char**argv, int count = 0, int index = 0){
    if (index >= argc) {
        return count;
    }
    int current_number = std::atoi(argv[index]);
    if(current_number%2==0){
        count += current_number;
    }
    return summingrecursive(argc, argv, count,index+1);
}
int main(int argc,char**argv){
    cout << "The sum of even numbers given in the parameters is: " << summingrecursive(argc,argv) << endl;
}