// The program will take an integer N as an argument.
// Do not use else ;)
// Print numbers from 1 to N – for each number – if the number is divisible by:
// three – also print "Fizz",
// five – also print "Buzz",
// both three and five – also print "FizzBuzz".
// Example:
// ./fizzbooz 3 ➞ PRINTS:
// 1
// 2
// 3 Fizz
#include <iostream>
int main(int argc, char** argv){
	int n=std::stoi(argv[1]);
	for(int i=1;i<=n;i++){
		std::cout << i << " ";
		if(i%3==0)
			std::cout << "Fizz";
		if(i%5==0)
			std::cout << "Buzz";
		std::cout << "\n";		
	}
	return 0;
}