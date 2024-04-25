// ----------- ZAD11 -----------
//(arrays) Jako parametr przekazana jest liczba naturalna
//Wydrukuj reprezentację binarną przekazanej w argumecie liczby

//./binary 11 ➞ WYDRUKUJE: "1011"


// ROZWIĄZANIE POCZATEK
#include <iostream>

void printBinaryRepresentation(int number) {
    int binaryDigits[32]; // assuming a 32-bit integer
    int index = 0;

    // Convert to binary
    while (number > 0) {
        binaryDigits[index++] = number % 2;
        number /= 2;
    }

    // Print binary representation in reverse order
    for (int i = index - 1; i >= 0; --i) {
        std::cout << binaryDigits[i];
    }

    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./binary <number>" << std::endl;
        return 1;
    }

    int number = std::stoi(argv[1]);
    printBinaryRepresentation(number);

    return 0;
}

// ROZWIĄZANIE KONIEC
