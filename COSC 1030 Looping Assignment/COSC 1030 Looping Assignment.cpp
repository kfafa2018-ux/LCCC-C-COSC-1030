// COSC 1030 Looping Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Random Number Guessing Game
/*Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is.
If the user's guess is higher than the random number, the program should display "Too high, try again."  
If the user's guess is lower than the random number, the program should display "Too low, try again."  
The program should use a do - while loop that repeats until the user guesses the number correctly.
The program should also employ a while loop that keeps track of the number of guesses made by the user and, 
once the user guesses the number correctly, displays the number of guesses the user made.*/

#include <iostream>
using namespace std;

int main() {
	int randomNumber;
	int userGuess;
	int guessCount = 0;

	randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

	cout << "Guess the number";// Prompt the user to guess the number

	cin >> userGuess; // Get the user's guess

	do { // Do-while loop
		guessCount++; // Increment the guess count
		if (userGuess > randomNumber) { // If the user's guess is higher than the random number
			cout << "Too high, try again." << endl; // Display "Too high, try again."
		}
		else { // If the user's guess is lower than the random number
			cout << "Too low, try again." << endl; // Display "Too low, try again."
		}
		cin >> userGuess; // Get the user's next guess
	} while (userGuess != randomNumber);
	cout << "Congratulations! You guessed the number in " << guessCount << " tries." << endl;
}