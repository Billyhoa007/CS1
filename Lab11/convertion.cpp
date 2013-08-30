#include "converter.h"
#include <iostream>
#include <cmath>
#include <limits>

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
