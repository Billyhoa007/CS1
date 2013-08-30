/* This program converts any from base 10 to base 2 and the other way around
 * Bill Hoag 
 * 6/30/2013
 */

#include <iostream>
#include <limits>
#include <cmath>

bool getinput(int&, int&, int&);
/*Precondition: input the number you would like to change
 * then input the base you would like to convert
 * then input the base you would like to convert to
 * Postconditions: takes the values the user inputs and inputs the values
 * into the equations convert_to_base
 */

int convert_to_base(const int&, const int&, const int&);
/*Precondtion: takes the values input from the equations from
 * the function get input.
 * Postconditions: takes the value inputed from getinput and
 * and converts it into the right base
 */

int main() {
	
	// varibale declerations
	int num_to_convert, from_base, to_base, result;
	const int CONVERSION_MINIMUM = 1, CONVERSION_MAXIMUM = 2147483647, BASE_MINIMUM = 2, BASE_MAXIMUM = 10;
	bool input_ok = false, from_base_10 = false;

	// chekcs to see that that the values entered are in between the values of 1 and 2147483647 for the value
	// and the base between the numbers of 2 and 10 
	while(!getinput(num_to_convert, from_base, to_base) && !input_ok) {
		if((CONVERSION_MINIMUM <= num_to_convert <= CONVERSION_MAXIMUM) || 
		   (BASE_MINIMUM <= from_base <= BASE_MAXIMUM) ||
		   (BASE_MINIMUM <= to_base <= BASE_MAXIMUM)) {
			// error message if the values entered are incorrect
			std::cout << "There was a problem with the input values you provided." << std::endl;
		} else {
			input_ok = true;	
		}
	}
	
	//checks to see if the values converted are from base the original base to the converted one 
	from_base_10 = (from_base > to_base);
	result = convert_to_base(num_to_convert, from_base, to_base);

	if(from_base_10)
	{
		std::cout << num_to_convert << " in base 10 is " << result << " in base " << to_base << std::endl;
	
	}
	else
	{
		std::cout << num_to_convert << " in base " << from_base <<  " is " << result << " in base " << to_base << std::endl;	
	
	}

}


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
