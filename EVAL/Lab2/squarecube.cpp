/*calulates numbers 1 to 6 digits long
 * Bill Hoag
 * 6/13/13
 */

/* maximum digits is 5 digits going least to greatest 
 * 12345 but only goes 4 digits for greates to least 4321
 */

#include <iostream>

int main()
{
	//variables 
	long number, type;
	long squared, cube;

	//messages for the user to know what number to type in 
	std::cout << "input a number from 1-5 digits for square and for cube " << std::endl;						
	std::cin >> number;
	//message for the user to know what number to type in
	std::cout << "input if you either want squared type 1 or cubed type 2" << std::endl;
	std::cin >> type;
	
	//assignment statements
	squared = number * number;
	cube = number * number * number;

	//output for squared
	if (type == 1) 
	{
		std::cout << "number entered is " << squared <<  std::endl;
	}
	
	//output for cubed
	if (type == 2)
	{
		std::cout << "number entered is "  << cube << std::endl;	
	}
	
	return 0;

}
