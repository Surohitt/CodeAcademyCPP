#include <iostream>

int main(){
	
	double tempf = 0;
	double tempc = 0;
	
	char type;

	
	std::cout << "If you wish to convert from Fahrenheit, type F. Else C for Celsius: \n";
	std::cin >> type;
    
	type = toupper(type);

	if (type == 'F'){
		std::cout << "Enter the temperature in Fahrenheit: \n";
		std::cin >> tempf;

		tempc = (tempf -32)/1.8;
		std::cout << "Temperature in Celsius: " << tempc << "\n";

	} else {
		std::cout << "Enter the temperature in Celsius: \n";
		std::cin >> tempc;

		tempf = (tempc * 1.8) + 32;
		std::cout << "Temperature in Fahrenheit: " << tempf << "\n";
	}

}
