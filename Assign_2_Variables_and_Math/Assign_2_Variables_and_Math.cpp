// Assign_2_Variables_and_Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Intentionally use 32-bit ints first so the product overflows
    int A;
    int B;
    int C;
    int D;

    int product;
    int average;
    int sum;

    A = 1100;
    B = 2200;
    C = 3300;
    D = 4400;

    sum = A + B + C + D;
    product = A * B * C * D; // intentionally causes 32-bit overflow
    average = sum / 4;       // integer (truncated) average

    // Show the (overflowed) int results first
    std::cout << "Product (int, overflow expected): " << product << std::endl;
    std::cout << "Average (int, truncated): " << average << std::endl;

    // Now compute using doubles to get the correct results
    cout << fixed << setprecision(3);
    double updatedProduct = static_cast<double>(A) * static_cast<double>(B) * static_cast<double>(C) * static_cast<double>(D);
    std::cout << "Updated Product: " << updatedProduct << std::endl;
    double updatedAverage = static_cast<double>(sum) / 4.0;
    std::cout << "Updated Average: " << updatedAverage << std::endl;
    return 0;
}
