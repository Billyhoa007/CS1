/*Menu for Volume and surface area if Box, Volume and suface area of Cylinder, Volume and surface area of a Sphere
 * Bill Hoag
 * 6/20/2013
 */

/* does all values in the doulbe value id
 */

#include <iostream>
// global value for Pi
const float Pi = 3.141593;

int main()
{
// variables for main part of program	
int choice = 0;
double length = 0.0, width = 0.0 , height = 0.0, radius = 0.0, volBox, volCyli, volSphere, surfAreaBox, surfAreaCyli, surfAreaSphe;
	
	//menu messages for the user 
	std::cout << "\tPress 1 for Volume of a Box\n" 
			  << "\tPress 2 for Surface area of a Box\n" 
			  << "\tPress 3 for Volume of a Cylinder\n" 
			  << "\tPress 4 for Surface area of a Cylinder\n" 
	          << "\tPress 5 for Volume of a Sphere\n" 
		      << "\tPress 6 for Volume of a Sphere" << std::endl;

	std::cin >> choice;
	// precision for 2 spaces after dcimal point
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(2);
	
	//calls the chice you choose for the menu above
	switch (choice) {
	
			//Volume of Box
			case 1:
					std::cout << " To find the volume of the box input the Length Width and height (with spaces)" << std::endl;
					std::cin >> length >> width >> height;
					volBox = length * width * height;
					std::cout << "Volume of box: Length = " << length << " Width = " << width << " Height = " << height << " Your answer is " << volBox << std::endl;
					break;
			//Surface area of Box
			case 2: 
					std::cout << " To find the surface area of the box input the Length Width and height (with spaces)" << std::endl;
					std::cin >> length >> width >> height;
					surfAreaBox = (2 * length * width) + (2 * width * height) + (2 * length * height);	
					std::cout << "Volume of box: Length = " << length << " Width = " << width << " Height = " << height << " Your answer is " << surfAreaBox << std::endl;
					break;
			//Volume of a Cylinder 
			case 3:
					std::cout << " To find the volume of the box input the radius and height (with spaces)" << std::endl;
					std::cin >> radius >> height;
					volCyli = Pi * radius * 2 * height;
					std::cout << "Radius of the Cylinder = " << radius << " Height = " << height << " Your answer is " << volCyli << std::endl;
					break;
			//Surface area of a Cylinder
			case 4:
					std::cout << " To find the surface area of the box input the radius and height (with spaces)" << std::endl;
					std::cin >> radius >> height;
					surfAreaCyli = 2 * Pi * radius * height + 2 * Pi * radius * 2; 
					std::cout << "Radius of the Cylinder = " << radius << " Height = " << height << " Your anser is " << surfAreaCyli << std::endl;
					break;
			//Volume of a Sphere
			case 5:
					std::cout << " To find the volume of a Sphere input the radius" << std::endl;
					std::cin >> radius;
					volSphere = 4/3 * Pi * radius * radius * radius;
					std::cout << "Radius of the Cylinder = " << radius << " Your answer is " << volSphere << std::endl;
					break;
			//Surface area of a Sphere
			case 6:	
					std::cout << " To find the surface area of the Sphere input the radius" << std::endl;
					std::cin >> radius;
					surfAreaSphe = 4 * Pi * radius *radius;  
					std::cout << "Radius of the Cylinder = " << radius << "  Your answer is " << surfAreaSphe << std::endl;
					break;
	
	
	
	}
}
