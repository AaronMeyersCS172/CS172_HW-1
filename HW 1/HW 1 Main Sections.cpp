#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include "Function Prototype Storage.h"
using namespace std;

//This function contains the code for the second part of the assignment
void EX01_02()
{
	cout << "\nA)" << endl;
	int hasPassedTest = true; //Initailizes the variable "hasPassedTest" to be true

	cout << "\nB)" << endl;
	srand(time(NULL)); //Sets up the random number generator and the variables that will be randomized
	int x = rand() % 100;
	int y = rand() % 100;

	//This will execute if x is greater y
	if (x > y)
	{
		cout << "X (" << x << ") is greater than Y (" << y << ") .\n" << endl;
	}

	//This will execute if x is less than y
	else if (x < y)
	{
		cout << "X (" << x << ") is not greater than Y (" << y << ") .\n" << endl;
	}

	//This will execute if x is equal to y
	else if(x == y)
	{
		cout << "X (" << x << ") is equal to Y (" << y << ") .\n" << endl;
	}

	cout << "\nC)" << endl;
	NumberofShares(); //Calls the function that contains the code for part C of EX01_02

	cout << "\nD)" << endl;
	BoxBook(); //Calls the function that contains the code for part D of EX01_02

	cout << "\nE)" << endl;
	Chocolate(); //Calls the function that contains the code for part E of EX01_02
}

//This function contains the code for the third part of the assignmnet
void EX01_03()
{
	cout << "\nA)" << endl;
	Square(); //Calls the function that contains the code for part A of EX01_03

	cout << "\nB)" << endl;
	YESorNO(); //Calls the function that contains the code for part B of EX01_03

	cout << "\nC)" << endl;
	char tab = '\t'; //Initializes the tab action to the tab character
	cout << "\\t is a tab character. \t As shown." << endl; //Shows the '\t' in action

	cout << "\nD)" << endl;
	string mailingAddress = ""; //Declares a string variable
	cout << "\nEnter your mailing address." << endl;
	cin >> mailingAddress; //Gets the user's mailing address in a form of a string
	cout << "You mailing address is " << mailingAddress << "." << endl; //Outputs the mailing addrress that the user typed in

	cout << "\nE)" << endl;
	string variable; //Initializes a string variable to an empty string
}

//This function contains the fourth part of the assignment
void EX01_04()
{
	cout << "\nA)" << endl;
	int input = 0; //Declares a variable for user input
	cout << "Input a number between 1 and 10" << endl;
	cin >> input; //Get input from the user

	//This loop executes if the user inputs a number that is not between 1 and 10
	//The loop will end once the user inputs a number that falls within the accepted range
	while (input < 1 || input > 10)
	{
		cout << "Invalid. Try again. " << endl;
		cin >> input; //Get input from the user
	}

	cout << "\nYou inputted " << input << ".\n" << endl; //Outputs the number that the usre inputted

	cout << "\nB)" << endl;
	double cubeSum = 0; //Declares a variable that will contain the sum of all of the numbers after they are cubed
	double cube = 0; //Declares a variable that will be a number after it is cubed

	//This loop will execute the same number of times as the number that the user had inputted previously
	for (int z = input; z >= 0; z--)
	{
		cube = pow(z, 3); //Cubes a number
		cubeSum += cube; //The number is then stored in the overall sum variable
	}

	cout << "\nThe total sum of the cubes is " << cubeSum << ".\n" << endl; //Outputs the overall sum of the cubes

	cout << "\nC)" << endl;
	int loop = input; //Declares a loop limiter variable that is equal to the previously input from the user
	
	//This loop will execute until the "loop" variable is equal to 0
	//It will output an asterisk everytime that the loop executes
	do {

		cout << "*"; //Outputs an asterisk
		loop--; //Reduces the loop limiter by one

	} while (loop > 0);

	cout << "\nYou outputted " << input << " asterisks.\n" << endl; //Outputs how many asterisks were outputted

	cout << "\nD)" << endl;

	//This loop will execute until the limiter variable is greater than 40, then it will end
	//The loop will output only even numbers: from 0 to 40
	for (int e = 0; e <= 40; e++)
	{
		//This will test the current number to see of it is evenly divisable by 2. If it is the number is then outputted
		if (e % 2 == 0)
		{
			cout << e << setw(3);
		}
	}
	cout << endl; //Outputs an empty line

	cout << "\nE)" << endl;
	integerDouble(input); //Calls the function that contains the code for doubling the input of the user 

	cout << "\nG)" << endl;
	srand(time(NULL)); //Sets up the random number generator and declares variables to be randomized
	int x = rand() % 100;
	int y = rand() % 100;

	int sum = 0; //Declares a variable that will act as the sum of the randomized variables
	add(x, y, sum); //Calls the function that contians the code for adding different variables together
}

//This function contians the code for the fifth part of the assignment
void EX01_05()
{
	cout << "\nA)" << endl;
	cout << "Input 5 numbers." << endl; //Asks the user for input

	const int iSize = 5; //Declares a constant variable that will act as the size of the array
	int inputs[iSize]; //Declares an array with its size being the above variable 
	int INputs = 0; //Declares a variable for user input

	//This loop will execute for the purpose of storing user input into the array
	//In each loop, the input from the user is stored in a new spot within the array
	//The loop will end once it has executed more than the value of the array size
	for (int i = 0; i < iSize; i++)
	{
		cin >> INputs; //Get input form the user
		inputs[i] = INputs; //Stores input into the array
	}
	cout << endl;

	cout << "\B)" << endl;
	int SUM = 0; //Declares a variable that will act as the overall sum of the values stored in the array

	//This loop will execute the same number of times as the size of the array, then it will end
	//In each loop, the value stored in the array will be added to the overall sum variable
	for (int i = 0; i < iSize; i++)
	{
		SUM += inputs[i]; //Takes the value that is stored in the array and adds it to the overall sum variable
	}
	cout << "\nThe sum of all of your inputs is " << SUM << "." << endl; //Outputs the overall sum of the array values


	double PRODUCT = 1; //Declares a variable that will act as an overall multiplication value

	//This loop will execute the same number of times as the size of the array, then it will end
	//In each loop, the value stored in the array will be added/multiplied to the overall product variable
	for (int i = 0; i < iSize; i++)
	{
		PRODUCT *= inputs[i]; //Takes the value that is stored in the array and multiples it to the overall product value
	}
	cout << "\nThe product of all of your inputs is " << PRODUCT << "." << endl; //Outputs the overall product of the array values


	cout << "\nC)" << endl;
	cout << "\nThe numbers that you had before inputted are ";

	//This loop will execute the same number of times as the size of the array, then it will end
	//The purpose of this loop is to output all of the values that are stored in the array
	for (int i = 0; i < iSize; i++)
	{
		cout << inputs[i] << setw(3); //This outputs the value that is stored in the array
	}
	cout << endl; //Outputs an empty line


	cout << "\nD)" << endl;
	int value = 0; //Declares a variable for user input
	cout << "\nEnter a value and see if it is stored in the array." << endl;
	cin >> value; //Get input from the user

	//This loop will execute the same number of times as the size of the array, then it will end
	//This loop will test whether or not the value that the user inputted is equal to any of the values that are stored in the array
	for (int i = 0; i < iSize; i++)
	{
		if (value == inputs[i]) //This executes if the value inputted from the user is equal to any of the values stored in the array
		{
			cout << "The value, " << value << ", is in the array." << endl;
		}
		else //This executes if the value inputted from the user is not equal to any of the values stored in the array
		{
			cout << "The value, " << value << ", is not in the array." << endl;
		}
	}
}