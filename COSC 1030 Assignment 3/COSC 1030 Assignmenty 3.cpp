// COSC 1030 Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
	//making 4 int variables, 3 that are obtained via user input, and one that is assigned the smallest value of the users inputted numbers
	int num1;
	int num2;
	int num3;
	// I had to make a 5th variable to handle the commas for the user input so that the program would run correctly
	char comma1, comma2;
	int leastValue;

	// here we prompt the user to enter three integers seperated by commas, and then we store the values in the variables we created above

	cout << "Please enter three integers seperated by commas:" << endl;

	cin >> num1 >> comma1 >> num2 >> comma2 >> num3;

	//The leastValue variable is assigned the value of num1, and then we check if num2 or num3 is less than leastValue, and if so, we assign leastValue to that value. If none of the numbers are less than leastValue, we prompt the user to enter three integers seperated by commas again.
	leastValue = num1;
	if (num2 < leastValue) {
		leastValue = num2;
	}
	if (num3 < leastValue) {
		leastValue = num3;
	}
	// If the user enters the same number 3 times they will be told all numbers are equal.
	else if (leastValue == num1 && leastValue == num2 && leastValue == num3) {
		cout << "The numbers are all equal" << endl;
	}
	cout << "The least value is: " << leastValue << endl;
	
    return 0;
}