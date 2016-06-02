//////////////////////////////////////////
// Aaron Meyers
// 5/23/16
// CS172
// Homework 1: EX01_01 - EX01_05
////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include "Function Prototype Storage.h"
using namespace std;

//PT
//  EX01_01: 14/20
//  EX01_02: 20/20
//  EX01_03: 20/20
//  EX01_04: 16/20
//  EX01_05: 20/20
//-----------------
//  TOTAL: 90/100

int main()
{
	cout << "EX01\n" << endl;

	//These are the questions that have the answer that I think are right
	cout << "A) When a program runs on a computer, the part of the computer that carries out the instructions is called the "
		<< "_____________." << endl;
	cout << "Answer: Control Unit\n" << endl;

	cout << "B) When a program runs on a computer, it is stored in __________." << endl;
	//PT: in main memory. -2
	cout << "Answer: on a disk\n" << endl;

	cout << "C) When a program is not running, it is stored ___________." << endl;
	//PT: on disk: -2
	cout << "Answer: in main memory\n" << endl;

	cout << "D) A bit is ___________." << endl;
	cout << "Answer: a binary digit, like 0 or 1\n" << endl;

	cout << "E) A byte in memory is identified by a unique number called its  ____________." << endl;
	cout << "Answer: address\n" << endl;

	cout << "F) In modern computer systems, a byte consists of __________ bits." << endl;
	cout << "Answer: 8\n" << endl;

	cout << "G) An operating system _____________." << endl;
	//PT: allocates resources ...  -2
	cout << "Answer: all of the above\n" << endl; //This answer refers to that all of the possible answers are correct
	
	cout << "H) Application software _____________." << endl;
	cout << "Answer: is any software that runs with the support of the operating system\n" << endl;


	cout << "EX02\n" << endl;
	
	EX01_02(); //Calls the function that contains the code for the second part of the assignment


	cout << "\nEX03\n" << endl;

	EX01_03(); //Calls the function that contains the code for the third part of the assignment


	cout << "\nEX04\n" << endl;

	EX01_04(); //Calls the function that contains the code for the fourth part of the assignment


	cout << "\nEX05\n" << endl;

	EX01_05(); //Calls the function that contains the code for the fifth part of the assignment


	return 0;
}

