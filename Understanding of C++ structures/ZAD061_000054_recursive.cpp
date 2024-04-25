// ----------- ZAD54 -----------
//(recursive) Zrób zadanie (podobne do 23) używając rekurencji
//Wydrukuj po spacjach <a href="https://pl.wikipedia.org/wiki/Permutacja#Permutacja_bez_powt%C3%B3rze%C5%84">permutacje bez powtórzeń</a> dla cyfr podanych jako kolejne parametry 
//Permutacją bez powtórzeń zbioru złożonego z n różnych elementów nazywamy każdy n wyrazowy ciąg utworzony ze wszystkich wyrazów zbioru.

//./perm 1 2 3 ➞ WYDRUKUJE: 
//123 132 213 231 312 321 



// ROZWIĄZANIE POCZATEK
#include <iostream>
class Rectangle {
;;
	private:
		double width, height;
	public:
		int area = 0;
		int enlargedArea = 0;
		int wymiary = 0;
		int enl = 0;
		
		Rectangle(double w, double h){
			width = w;
			height = h;
		}
		double CalculateArea(){
			wymiary = width + height + wymiary;
			return (width * height);
		}
		int Enlarge(int n){
			enlargedArea += 2;
			wymiary = wymiary*n;
			width = width*n;
			height = height*n;
		}
		bool IsEnlarged(){
			if(enlargedArea > area){
				return 1;
			} else {
				return 0;
			}
		}
		bool SumOfEdgesIsGreaterThanTen(){
			if(wymiary >= 10){
				return 1;
			} else {
				return 0;
			}
		}
;;
};
int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i+=2){
		Rectangle rect1(std::stod(argv[i]), std::stod(argv[i+1]));
		std::cout << "Area: " << rect1.CalculateArea() << std::endl;
		std::cout << "Enlarged? " << rect1.IsEnlarged() << std::endl;
		std::cout << "Sum Of Edges > 10? " << rect1.SumOfEdgesIsGreaterThanTen() << std::endl;
		std::cout << "...Enlarging!" << std::endl;
		rect1.Enlarge(2);
		std::cout << "Area: " << rect1.CalculateArea() << std::endl;
		std::cout << "Enlarged? " << rect1.IsEnlarged() << std::endl;
		std::cout << "Sum Of Edges > 10? " << rect1.SumOfEdgesIsGreaterThanTen() << std::endl;
		std::cout << "-------------------" << std::endl;
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
