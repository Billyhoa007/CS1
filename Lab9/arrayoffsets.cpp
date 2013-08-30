/* Calulates the offset of any array by the cloumns and rows
 * Bill Hoag
 * 7/14/13
 */

#include <iostream>
/*Preconditions: inputs the values into this function to be 
 * input into the function
 *Postconditions: the input values are stored in the equations 
 *until outputed into main
 */

int calulateOffset(int row, int column, int subscriptR, int subscriptC, int& actualRow, int& actualColumn, int& offset);

int main()
{
	//variable declarations 
	int row = 0, column = 0, subscriptR = 0, subscriptC = 0, actualRow = 0, actualColumn = 0, offset = 0;
	char choice;  
	
	//outer loop to repeat the whole program 
	while(choice != 'N')
	{
		
		//variable redeclarations
		int subscriptR = 0, subscriptC = 0; 	

		std::cout << "Enter the number of rows and columns for your virtual array" << std::endl;
		std::cin >> row >> column;

		//inner loop for subscript
		while((subscriptR != -1) && (subscriptC != -1))
		{ 
				int subscriptR = 0, subscriptC = 0; 	

				std::cout << "Enter the subscripts for the rows and columns you would like. To end the program input -1 for both subscripts. ";
				std::cin >> subscriptR >> subscriptC;
		
				calulateOffset(row, column, subscriptR, subscriptC, actualRow, actualColumn, offset);
	
				// tells the program to stop if tthey both equal -1
				if((subscriptR == -1) && (subscriptC == -1))
				{
					break;
				}
				
				// does all other outputs if not
				else
				{
				
					if((offset > 0) && (offset <= (row * column))) 
					{
						//the normal output statement
						std::cout << "You have an array of " << row << " rows and " << column << " columns enter the subscript of " << 
						subscriptR << " for row and " << subscriptC << " the elements location would be acutally. Is row " << actualRow << 
						" and column " << actualColumn << " with an offset of " << offset << "." << std::endl;
					}

					else if (offset > (row * column))
					{
						//greater offset statement
						std::cout << "Your offset refers to an element that is outside the array." << std::endl;
						offset == -2;	
					}

					else if (offset < 0)
					{
						//less then offset statement
						std::cout << "Your offset refers to an element that is before the array." << std::endl;
						offset == -1;
					}

				}	
		}		
		
		//statement to loop throught the program
		std::cout << "Would you like to go again (Y/N)" << std::endl;
		std::cin >> choice;
	}

}

/* input: the variables row, columns, subscriptR, subscriptC 
 * stored: the variables offset, actualRow, actualColumn
 * output: no output data
 */

int calulateOffset(int row, int column, int subscriptR, int subscriptC, int& actualRow, int& actualColumn, int& offset)
{

	offset = subscriptR * column + subscriptC;
	actualRow =	offset / column;
	actualColumn = offset % column;

}

