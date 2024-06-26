// ----------- ZAD307 -----------
//(repetition) Dopisz brakujące klasy
//Nie używaj drukowania
//Zwróć uwagę co masz drukować
//./licz + 2 5 ➞ WYDRUKUJE: Wynikiem dodawania jest 7

#include <iostream>
;;
// ROZWIĄZANIE POCZATEK
class MathOperation {
	public:
		double num1 = 0;
		double num2 = 0;
		void Execute(double num1,double num2){
			this->num1 = num1;
			this->num2 = num2;
		}
	virtual std::string GetResult() = 0;	
};
class AddOperation : public MathOperation{
	std::string GetResult() override {
		return "Wynikiem dodawania jest "+ std::to_string(num1+num2);
	}
};
class SubtractOperation : public MathOperation {
	std::string GetResult() override {
		return "Wynikiem odejmowania jest "+ std::to_string(num1-num2);
	}
};
class MultiplyOperation : public MathOperation{
	std::string GetResult() override {
		return "Wynikiem mnożenia jest "+ std::to_string(num1*num2);
	}
};
class DivideOperation : public MathOperation{
	std::string GetResult() override {
		return "Wynikiem dzielenia jest "+ std::to_string(num1/num2);
	}
};
// ROZWIĄZANIE KONIEC
;;
int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: [operation] [number1] [number2]" << std::endl;
		return 1;
	}

	char operation = argv[1][0];  // Argument operacji to pojedynczy znak
	double num1 = std::stod(argv[2]);
	double num2 = std::stod(argv[3]);

	MathOperation* mathOperation = nullptr;

	switch (operation) {
		case '+':
			mathOperation = new AddOperation();
			break;
		case '-':
			mathOperation = new SubtractOperation();
			break;
		case '*':
			mathOperation = new MultiplyOperation();
			break;
		case '/':
			if (num2 == 0) {
				std::cerr << "Error: Division by zero." << std::endl;
				return 1;
			}
			mathOperation = new DivideOperation();
			break;
		default:
			std::cerr << "Invalid operation." << std::endl;
			return 1;
	}

	mathOperation->Execute(num1, num2);
	std::cout << mathOperation->GetResult() << std::endl;

	delete mathOperation;
	return 0;
}