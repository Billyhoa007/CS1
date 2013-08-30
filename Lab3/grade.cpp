/* Grading scale for exams
 * Bill Hoag 
 * 6/18/2013
 */

#include <iostream>

int main()
{
	// variables used 
	float exam1, exam2, exam3, exam4, finalGrade;
	char choice;
	
	do{
		// grading scale outputed
		std::cout << "\t 90 to 100 A \n" 
				  << "\t 80 to 89 B \n "
				  << "\t 70 to 79 C \n"
				  << "\t 60 to 69 D \n" 
				  << "\t Below 60 F" << std::endl;

		std::cout << "Input the values of your four exams with spaces between them" << std::endl;
		std::cin >> exam1 >> exam2 >> exam3 >> exam4;

		//your values outputed
		std::cout << "\t Exam 1:" << exam1 << std::endl;
		std::cout << "\t Exam 2:" << exam2 << std::endl;
		std::cout << "\t Exam 3:" << exam3 << std::endl;
		std::cout << "\t Exam 4:" << exam4 << std::endl;
		
		finalGrade = exam1 * 0.2 + exam2 * 0.2 + exam3 * 0.2 + exam4 * 0.4;
		
		//final grade with the value and letter outputed
		if((finalGrade <= 100) && (finalGrade >= 60))
		{
					
			if((finalGrade <= 100) && (finalGrade >= 90))
			{
				std::cout << "Final Grade:" << finalGrade << "Letter Grade: A" << std::endl;
			}
		
			else if ((finalGrade <= 89) && (finalGrade >= 80))
			{
				std::cout << "Final Grade:" << finalGrade << "Letter Grade: B" << std::endl;
			}
		
			else if ((finalGrade <= 79) && (finalGrade >= 70))
			{
				std::cout << "Final Grade:" << finalGrade << "Letter Grade: C" << std::endl;
			}
		
			else if ((finalGrade <= 69) && (finalGrade >= 60))
			{
			
				std::cout << "Final Grade:" << finalGrade << " Letter Grade: D" << std::endl;
			}
		}
		// below the value of 60 message outputed 
		else
		{
			std::cout << "You fail the Class." << std::endl;
		}
	// message for the user to run the program again
	std::cout <<"Would you like to go again?? (y/n)" << std::endl;
	std::cin >> choice;	
	
	} while(choice != 'n');

}
