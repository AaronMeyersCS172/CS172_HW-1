#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include "Function Prototype Storage.h"
using namespace std;

//This function contains the code for compareing an input from the user in relation to 100
void NumberofShares()
{
	int numberofShares = 0; //Declares a variable for user input

	cout << "Enter a number to view its relation to 100." << endl;
	cin >> numberofShares; //Gets input from the user

	if (numberofShares < 100) //Executes if the input is less than 100
	{
		cout << "Your number (" << numberofShares << ") is less than a 100." << endl;
	}
	else if (numberofShares > 100) //Executes if the input is greater than 100
	{
		cout << "Your number (" << numberofShares << ") is greater than 100." << endl;
	}
	else if (numberofShares == 100) //Executes if the input is equal to 100
	{
		cout << "Your number (" << numberofShares << ") is equal to 100." << endl;
	}

	return;
}

//This function contians the code for comparing different values inputted from the user and determine if they are divisable by each other
void BoxBook()
{
	int boxwidth = 0; //Declares a variable for the user to input a box width 
	int bookwidth = 0; //Declares a variable for the user to input a book width 
	const int divisor = 2; //Declares a consant variable that will act as a divisor for the above variable by 2

	cout << "Enter a value for box width. " << endl;
	cin >> boxwidth; //Gets input from the user
	cout << "Enter a value for book width. " << endl;
	cin >> bookwidth; //Gets input from the user

	if ((boxwidth / bookwidth) % divisor == 0) //Executes if the "boxwidth" value is evenly divisiable by the "bookwidth" value
	{
		cout << "The box width is evenly divisible by the book width. " << endl;
	}
	else if ((boxwidth / bookwidth) % divisor != 0) //Executes if the "boxwidth" value is not evenly divisiable by the "bookwidth" value
	{
		cout << "The box width is not evenly divisible by the book width. " << endl;
	}

	return;
}

//This function contians the code for teh shelf life of chocolate
void Chocolate()
{
	int shelfLife = 0; //Declares a variable for the shelflife of chocolate, which will be determined by user input
	int Temp = 0; //Declares a variable for the outside temperature, which will be determined by user input

	cout << "Enter a shelf life value for chocolate. " << endl;
	cin >> shelfLife; //Get input from the user
	cout << "Enter the outside temperature. " << endl;
	cin >> Temp; //Get input from the user

	if (Temp > 90) //Executes of the "Temp" variable is greater 90
	{
		shelfLife -= 4; //Decreases the "shelfLife" variable by 4

		cout << "The shelf life has decreased by 4 years and is now has " << shelfLife << " years left." << endl; //Outputs the shelf life of chocolate
	}
	else if (Temp <= 90) //Executes if the "Temp" variable is less than or equal to 90
	{
		cout << "The shelf life has remained the same and is now " << shelfLife << " years life." << endl; //Outputs the shelf life of chocolate
	}

	return;
}

//This function contains the code for computing the diagonal of a square
void Square()
{
	double SquareArea = 0; //Declares a variable for the area of a square, which will be determined by user input
	cout << "Give an area of a sqaure. " << endl;
	cin >> SquareArea; //Get input from the suer

	double side = sqrt(SquareArea); //Determines the length of the side of teh square by taking the square-root of the area of the square

	double Diagonal = side * (sqrt(2)); //Determines the length of the diagonal by multiplying the length of the side by the sqaure-root of 2
	cout << "\nThe length of the diagonal of the square is " << Diagonal << "." << endl; //Outputs the length of teh diagonal of the square

	return;
}

//This function contains the code for outputing "yes" or "no" based on single character inputs from the user
void YESorNO()
{
	char response; //Declares a char variable based on user input

	cout << "\nInput (y) for Yes and (n) for No." << endl;
	cin >> response; //Gets user input

	if (response == 'y') //Executes if the user inputs a "y"
	{
		cout << "Yes" << endl; //Outputs "yes"
	}
	else if (response == 'n') //Executes if the user input a "n"
	{
		cout << "No" << endl; //"Outputs "no"
	}

	return;
}

//This function contains the code for doubling the value that the usre inputted
//This function will take the input from the user and double it
int integerDouble(int input)
{
	input *= 2; //Doubles the input of the user

	cout << "\nYour input, when doubled, is " << input << ".\n" << endl; //Outputs the resulting number

	return input;
}

//This function contains of the code for adding random variables together
//Thsi function will take the values of "x" and "y" and combine them to the variable of "sum"
int add(int x, int y, int sum)
{
	sum = x + y; //Adds "x" and "y" together

	cout << "The sum of " << x << " and " << y << " is " << (x + y) << "." << endl; //Outputs teh numbers that were added togeher and the sum of the numbers

	return x, y, sum;
}