/* does grade calulations stored inside an array
 * Bill Hoag 
 * 6/18/2013
 */

#include <iostream>

int inputData(float grade[]);
/*Preconditions: the values are inputed into spots 1,2,3,4
 * of the array
 */
/*Posconditions: the values are now stored into the array waiting 
 * to be accessed
 */
int computeData(float grade[]);
/*Preconditons: uses the values stored in the array for spot 1,2,3,4
 */
/*Poscondtions: creates the average grade of thed 4 exams and stores 
 * this average in the 0 place
 */

int displayOutput(float grade[]);
/*Precondtions: uses the values stored in elements 1 to 4 and takes 
 * them ready to be outputed
 */
/*Postconditions: takes the 4 exam grades outputs them to screen and 
 * takes the average in the o element and outputs it to screen with a letter grade
 */

int main()
{
		//array delcarations
		float grade[5];
		
		inputData(grade);
		computeData(grade);
		displayOutput(grade);

}

/*Input : your four exams grades
 *Stored : the exam grades in element 1,2,3,4
 *Output: no output for this function
 */
int inputData(float grade[])
{		
	// grading scale outputed
		std::cout << "\t 90 to 100 A \n" 
				  << "\t 80 to 89 B \n "
				  << "\t 70 to 79 C \n"
				  << "\t 60 to 69 D \n" 
				  << "\t Below 60 F" << std::endl;

		std::cout << "Input the values of your four exams with spaces between them" << std::endl;
		std::cin >> grade[1] >> grade[2] >> grade[3] >> grade[4];
}

/* Input: the exam grades being stored from the previous
 * Stored: the forumla to calulated finalGrade(local variable)
 * Output: no output for this functions
 */

int computeData(float grade[])
{

		float finalGrade = 0;
		finalGrade = grade[1] * 0.2 + grade[2] * 0.2 + grade[3] * 0.2 + grade[4] * 0.4;
		grade[0] = finalGrade;
}

/* Input: input was from the top 2 functions
 * Stored: values stored are the average in elments 0 
 * and 4 exam grades in elements 1,2,3,4
 * Output: the 4 exam grades are outputed and then the average grade 
 * with the letter is outputed last
 */

int displayOutput(float grade[])
{

		//your values outputed
		std::cout << "\t Exam 1: " << grade[1] << std::endl;
		std::cout << "\t Exam 2: " << grade[2] << std::endl;
		std::cout << "\t Exam 3: " << grade[3] << std::endl;
		std::cout << "\t Exam 4: " << grade[4] << std::endl;
		
		
		//final grade with the value and letter outputed
		if((grade[0] <= 100) && (grade[0] >= 60))
		{
					
			if((grade[0] <= 100) && (grade[0] >= 90))
			{
				std::cout << "Final Grade: " << grade[0] << " Letter Grade: A" << std::endl;
			}
		
			else if ((grade[0] <= 89) && (grade[0] >= 80))
			{
				std::cout << "Final Grade: " << grade [0] << " Letter Grade: B" << std::endl;
			}
		
			else if ((grade[0] <= 79) && (grade[0] >= 70))
			{
				std::cout << "Final Grade: " << grade[0] << " Letter Grade: C" << std::endl;
			}
		
			else if ((grade[0] <= 69) && (grade[0] >= 60))
			{
			
				std::cout << "Final Grade: " << grade[0]  << " Letter Grade: D" << std::endl;
			}
		}
		// below the value of 60 message outputed 
		else
		{
			std::cout << "You fail the Class. " << std::endl;
		}
}
