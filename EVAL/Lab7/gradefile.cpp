/* takes grades from an input file and then output them to a different file
 * Bill Hoag 
 * 7/2/13
 */

#include <iostream>
#include <fstream>
#include <iomanip>


int main()
{
	using namespace std;


	//varibale names 
	char name[30];
	char fileName[30];
	int exam1 = 0, exam2 = 0, exam3 = 0, exam4 = 0, finalGrade = 0;
	
	//input file name 
	cout << "Enter the file name you would like to process. ";
	cin >> fileName;
	
	ifstream in_stream;
	ofstream out_stream;
	
	in_stream.open(fileName);
		
	//checks to see if the file is there
	if(in_stream.fail())
		{
		cout << "input file opening failed.\n";
		}

	// reads the first line of the dat file 
	
	// REMEMBER TO PUT THIS STATEMENT ON THE OUTSIDE OF THE LOOP 
		out_stream.open("finalGrade.dat");
	
	while( in_stream >> name >> exam1 >> exam2 >> exam3 >> exam4)
	{
		finalGrade = exam1 * 0.2 + exam2 * 0.2 + exam3 * 0.2 + exam4 * 0.4;


		//takes the data from the input file and outputs the correct format
		
		out_stream << name << " " << exam1 << " " << exam2 << " " << exam3 << " " << exam4;
		
			//calulates the letter grade 
			if((finalGrade <= 100) && (finalGrade >= 90))
				{
					out_stream <<" A";
				}
		
				else if ((finalGrade <= 89) && (finalGrade >= 80))
				{
					out_stream << " B";
				}
		
				else if ((finalGrade <= 79) && (finalGrade >= 70))
				{
					out_stream << " C";
				}
		
				else if ((finalGrade <= 69) && (finalGrade >= 60))
				{
					out_stream << " D";
				}
		out_stream << "\n" << endl;
	}

	//outputs message when done
	out_stream << "Finished the task of calulating grades." << endl;
	
	in_stream.close();
	out_stream.close();
}
