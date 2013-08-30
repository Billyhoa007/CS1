/* Rollig the dice from 1 to 6 and tracking in 2d array
 * Bill Hoag
 * 7/18/13
 */

#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip>

/* Preconditions: the values are randomly created from 1 to 6
 * for both the first and second die
 */
/* Posconditions: value are stored in the function until used
 */
int diceRoll(int& side_dice, int& side_dice_2);

/* Preconditions: takes the values from the random numbers 
 * and stored it in a two demensional array
 */
/* Posconditions: Output the values in the two demensional array
 * lining up both the first and second die with a large number of times
 */ 

void display(int roll, int diceRollArray[6][6]);

int main()
{
	// variable declarations 
	int seed = 0, roll = 0 ,side_dice_1 = 0,side_dice_2 = 0;
	// array declarations
	int diceRollArray[6][6];
	
	// the seeds used to create a specific sequence of numbers 
	std::cout << " Enter the seed you would like to include" << std::endl;
	std::cin >> seed;
	srand(seed);
	

/*	works with two loops to set all the values of the 
 *	2d array to 0
 

	for( int index = 0; index < 6; index++)
	{
		for (int j = 0; j < 6; j++)
		{
			diceRollArray[index][j] = 0; 
		}
	
	}
*/
	
	// sets the entire array to the value of zero using pointers
	int *ptr;
	ptr = &diceRollArray[0][0];
	for (int i = 0; i < 36; i++, ptr++)
		*ptr = 0;

	
	// enters the number of rolls for the random two numbers 
	std::cout << " Enter the number of rolls you would like to do" << std::endl;
	std::cin >> roll;
	
	// outputs the values in a list with the first and second dice 
	// with number of rolls 
	for(int index = 0; index < roll; ++index)
	{
		diceRoll(side_dice_1,side_dice_2);
		std::cout << "Roll " << std::setw(2) << index + 1 << "   ";
		std::cout << side_dice_1 << "," << side_dice_2 << ";" << std::endl;  
	    diceRollArray[side_dice_1-1][side_dice_2 - 1] += 1;		
	}
	
	display(roll, diceRollArray);

}

/*input: no input values its computer generated
 *stored: storing the formula to create ranodom numbers
 *output: no output
 */
int diceRoll(int& side_dice_1, int& side_dice_2)
{

	side_dice_1 = 1 + rand() % 6;
	side_dice_2 = 1 + rand() % 6;

}

/*input: input from the amount of values used and rolled
 *stored: stored the values rolled and the number of time 
 *output: output a two denmensional array 
 */
void display(int roll, int diceRollArray[][6])
{
	
	// information about the 2d array
	std::cout << "     Simulation of " << roll << " of \n";
	std::cout << "          the dice \n ";
	std::cout << "       Rows are for die 1 \n";
	std::cout << "      Columns are for die 2 \n ";
	std::cout << "\n ";
	std::cout << "    sides 1 2 3 4 5 6 \n";

	
	for(int row = 0; row < 6; row++)
	{
		
	
	/*	will not put worlds on the side but still 
	 *	works the way it is suppose to
	 
		
		if(row == 1)
		{
			std::cout << " Roll";
		}

		else if(row == 2)
		{
			std::cout << "   of";
		}

		else if(row == 3)
		{
			std::cout << "die 1";
		}
	*/	
	
		std::cout << std::setw(10) << row + 1;
		
		for(int column = 0; column < 6; column++)
		{
			std::cout << " " << diceRollArray[row][column];
		}
		
		std::cout << std::endl;
	}


}
