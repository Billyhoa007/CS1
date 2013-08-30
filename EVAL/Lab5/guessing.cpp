/* random number generator
 * Bill Hoag 
 * 6/25/13
 */

/* This programs random number generator is between 0 and 99
 */

#include <iostream>
#include <ctime>
#include <cstdlib>


int main()
{
	
	//variables used in the first loop of the program 
	char choice;
	int guess;
	
	do{
		
		//dementions of the program for the user 
		std::cout << "I selected a number between 0 and 99, what is it?    ";
		std::cin >> guess;		
				
		//controls the random number the computer generates 
		srand(time(NULL));
		int random = (rand() % 100);
		
		//checks for the random number generatated compared to the guess  
		while(guess != random)
		{
		
				if(guess > random)
				{
					std::cout << "Wrong, it is smaller, what is it?    ";  
					std::cin >> guess;		
				}
		
				else if (guess < random)
				{
			
					std::cout << "Wrong, it is larger, what is it?    ";
					std::cin >> guess;
				}
				
		}
	
		//once the values of the guess and random number are equal output message to the user
		std::cout << "Your guess of " << guess << " is correct." << std::endl;
		
		//asks the users to run the random number generator again
		std::cout << "Would you like to guess again? (y/n)" << std::endl;
		std::cin >> choice;
	} while (choice != 'n'); 

	return 0;
}

