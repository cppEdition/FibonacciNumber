#include <iostream>
#include <math.h>

//input -1474 ... 1474
double pi = 3.1415926535897932384;

double golden_ratio() {
	double num = ((1 + sqrt(5))/2);
	return num;
}

long double binets_formul(int n) {
	//pow(a,b); a - число b - степень
	long double num = (1 / sqrt(5)) * (pow(golden_ratio(), n) - (cos(pi * n) / pow(golden_ratio(), n)));
	return num;
}

int main() {
	//int input = 0;
	//std::cout << "Enter number: ";
	//std::cin >> input;
	int mas[1474];
	for (int i = 0; i < 1474; i++) {
		mas[i] = i;
		std::cout << binets_formul(mas[i]) << ";\t";
	}
	//std::cout << "Fibonacci Number: " << binets_formul(input) << std::endl;
	return 0;
}
