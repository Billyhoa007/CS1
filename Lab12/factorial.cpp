/* Calulates any factorial number then outputs to the screen
 * Bill Hoag
 * 7/23/1013
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>

//global variable
int const SIZE = 100;

/* Preconditions: takes the value of the factorial and stores in 
 * a compile time array and holds like data
 * Postconditions: takes the value stored in the array and outputs 
 * to a file named factorial.txt
 */
int factorial(double fArray[], int factor);

/* Preconditions: take the value calulated in the array to 
 * calulated factorial. Displayed right to left.
 * Postconditions: displayed to either the screen or to the file
 */
void output(std::ostream&, double fArray[SIZE], int last);

int main()
{

	
	//declartion of variables 
	double fArray[SIZE], factor = 0.0;
	std::string choice;
	char letter;
	
	do{
	
	//number being factored statement then typed on screen
	std::cout << "Enter a number you would like to find the factorial from 1 to 324 \n";
	std::cin >> factor;
	
	//declaring loop to be all zeros 
	for(int i = 0; i < SIZE; i++) {
		
		fArray[i] = 0.0;
	}
	
	//tells either statement either file or to the screen
	std::cout << "Enter if you would like to output to screen or file \n";
	std::cin >> choice;

	//variable to function
	int last_element = factorial(fArray, factor);
	std::ofstream out_stream;

	if(choice == "file")
	{
		//opens file 
		out_stream.open("factorial.txt");
		//calls function
		output(out_stream, fArray, last_element);
		out_stream.close();
	}

	else 
	{
		//on the screen
		output(std::cout, fArray,last_element);
	}
	
	//statement to go thought the loop again
	std::cout << "\n" << std::endl;
	std::cout << "Would like to find a different factorial? (Y/N)" << std::endl;
	std::cin >> letter;
				  	
	} while(letter != 'N');
}

/* input: typed factorial 
 * stored: calulated factorial and stored into a array
 * outputed: no output
 */

int factorial( double fArray[], int factor)
{
	//local variables
	int remainder = 0, last_ele = 1;
	fArray[0] = 1;
	
	//calulated factorial from 1 to 324 
	for(int i = 1; i <= factor ; i++) {
		int carry = 0;
			for(int k = 0; k < last_ele; k++) {
				int result = fArray[k] * i + carry;
				if(result >= 100000) {
					carry = result / 100000;
					remainder = result - (carry * 100000);
					fArray[k] = remainder;
				}
				else {
					carry = 0;
					fArray[k] = result;
				}
			}
	if(carry > 0) {
		
		fArray[last_ele++] = carry;
		
	}

	}
	// returns the last_element to show in the display
	return last_ele;
}

/* input: the data of factorial
 * stored: the factorial in the array
 * output: the array from right to left with 5 numbers in 
 * each element.
 */

void output(std::ostream& out, double fArray[SIZE], int last)
{
	//right to left output of array
	for (int i = last - 1; i >= 0; i--) {
		// zeros put in after the number 
		std::cout << std::setw(5);
		std::cout << std::setfill('0');
		out << fArray[i];
//		if((i % 5) == 0)
//		{
//			std::cout << "\n" << std::endl;
//		}
	}
}

