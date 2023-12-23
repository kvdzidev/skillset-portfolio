// (if) The program will take the intensity of an explosion as an argument, which is an integer "n".
// The program should print "Boom" based on the following conditions:
// - The printed text should contain n characters "o," unless n is less than 2 – in that case, it should print "boom" without checking other conditions
// - If n is divisible by 2, add an exclamation mark at the end
// - If n is divisible by 5, everything should be printed in UPPERCASE
// Example:
// 	./boom 1 ➞ PRINTS: "boom"
// 	./boom 4 ➞ PRINTS: "Boooom!"
// 	./boom 5 ➞ PRINTS: "BOOOOOM"
// 	./boom 10 ➞ PRINTS: "BOOOOOOOOOOM!"
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	int n;
	n = std::stoi(argv[1]);
	if (n < 2) {
		std::cout << "boom";
	} else {
		std::cout << "B";
		if (n % 5 == 0) {
			for(int i =0; i<n; i++) {
				std::cout << "O";
			}
			std::cout << "M";
		} else {
			for(int i =0; i<n; i++) {
				std::cout << "o";
			}
			std::cout << "m";
		}
		if (n % 2 == 0) {
			std::cout << "!";
		}
	}
}