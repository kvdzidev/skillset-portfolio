//Write a program that takes a natural number N as a parameter and then prints as many asterisks as N. 
//The dimension cannot be less than 0. 
//Print the result to standard output.
#include <iostream>
int main(int argc, char** argv){
	int n;
	n = std::stoi(argv[1]);
	for(int i=0;i<n;i++ )
		std::cout << "*";
	return 0;
}