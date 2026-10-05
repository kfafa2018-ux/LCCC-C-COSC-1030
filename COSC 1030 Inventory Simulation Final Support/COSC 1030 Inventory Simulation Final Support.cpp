/* COSC 1030 Inventory Simulation Final Support.cpp 
A Simple C++ Script(.cpp)
Demonstrate two core coding features :
A loop that iterates over the number of simulation days
(e.g., a for or while loop, if - else, etc, that you have learned prior to this project).
A basic setup for Random Number Generation(RNG) for the Monte Carlo simulation
(e.g., using <random> with std::mt19937 and distribution functions).
You don't need to finish the full project just get these basic building blocks working.
Complete it Project 2nd deliverable.
The main point is to build a simulation that helps 
management find the best reordering threshold and reorder amount for inventory control.

Here is how the simulation works:

The Daily Loop (The Trial): You will write a loop that simulates a fixed number of business days (e.g., 50 days).
Inside this loop, you use random numbers to simulate daily demand and track three main things:
    Incoming orders and current inventory levels.
    How many days you ran out of stock (and any stockout penalties).
    Total inventory holding costs.
The Full Run (Multiple Trials): You will run this daily loop many
times to gather enough data to account for randomness and uncertainty.
The Final Goal (Summary Data): You will calculate the average and
standard deviation across all trials to figure out which policy combination performs best.
Start by coding and testing the single-day loop first—getting the
daily tracking logic right is the foundation for everything else.
*/

#include <iostream>

using namespace std;

int main()


//Setting up my variables for the simulation
{
    int numDays; // Number of days to simulate
	int incomingOrders; // Incoming orders for the day
	int currentInventory; // Current inventory level

	/* The user will be prompted to input the values for
    the number of days to simulate, incoming orders, and current inventory level.*/

    cout << "Enter the number of days to simulate: ";
    cin >> numDays;
    cout << "Enter the incoming orders for the day: ";
    cin >> incomingOrders;
    cout << "Enter the current inventory level: ";
    cin >> currentInventory;

	// A while loop that iterates over the number of simulation days
	int day = 1;
	while (day <= numDays) {
		cout << "Day " << day << ": " << endl;
		cout << "Incoming Orders: " << incomingOrders << endl;
		cout << "Current Inventory: " << currentInventory << endl;
		// Simulate daily demand using random numbers
		// Daily demand is a random number between 0 and 10
		int dailyDemand = rand() % 11; // Random number between 0 and 10
		cout << "Daily Demand: " << dailyDemand << endl;
		// Update current inventory based on incoming orders and daily demand
		currentInventory += incomingOrders - dailyDemand;
		// Check for stockout
		if (currentInventory < 0) {
			cout << "Stockout occurred! Current Inventory: " << currentInventory << endl;
			currentInventory = 0; // Reset inventory to zero if stockout occurs
		}
		cout << "End of Day Inventory: " << currentInventory << endl;
		cout << "-----------------------------" << endl;
		day++; // Increment the day counter
	}
	return 0;
}


