// Temperature Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

int main() {

	// Declare a Variable
	double tempc;
	double tempf;

	// Ask the user
	std::cout << "Good day.\n";
	std::cout << "Enter your current temperature in Celsius: ";
	std::cin >> tempc;

	tempf = tempc * 1.8;

	std::cout << "Your current temperature is: " << tempf << " degrees Farenheit.\n";

	return 0;
}