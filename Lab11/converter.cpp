#include "converter.h"
#include <iostream>
#include <cmath>
#include <limits>


bool getinput(int& num_to_convert, int& from_base, int& to_base) {
	std::cout << "Input value to convert: ";
	std::cin >> num_to_convert;
	std::cout << "Input base of number: ";
	std::cin >> from_base;
	std::cout << "Input base to convert to: ";
	std::cin >> to_base;
	
	//checks to see if all input values are successsful
	if(std::cin.fail()) {
		std::cout << "There was a problem with the input values you provided." << std::endl;
		std::cin.ignore(std::numeric_limits<int>::max());
		std::cin.clear();
		return false;	
	} else {
		return true;	
	}	
}

int convert_to_base(const int& num_to_convert, const int& from_base, const int& to_base) {
	int result = 0;
	int converted_value = 0;
	int value = num_to_convert;
	int power = 0;

	// example 
	// 1024 to the base of 8 to 10
	// 4 * 10^1 + 2 * 10^2 + 0 * 10^3 + 1 * 10^4
	
	// covert from _base to base 10
	while (value > 0) {
		converted_value += (value % 10) * pow(from_base, power);
		value /= 10; 
		++power;
	}
	power = 0;
	
	//convert from base 10 to base 
	while (converted_value > 0) {
		result += (converted_value % to_base) * pow(10, power);
		converted_value /= to_base;
		++power;
	}
	return result;
}



	
