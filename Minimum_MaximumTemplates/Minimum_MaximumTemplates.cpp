// Minimum_MaximumTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


//T is a generic type that will be defined later
template <typename T>       
T maximum(const T & a, const T & b) 
{
//ternary operator: if expression 1 is true then expression 2 is executed, if it is false then expression 2 is executed
	return (a > b ? a : b);         
}

//T is a generic type that will be defined later
template <typename T>
T minimum(const T & c, const T & d)
{
	return (c < d ? c : d);         //ternary operator
	//if c < d is true then c is returned
	//if c < d is false then d is returned
}

int main()
{
	int a = 7;
	int b = 9;
	//must define T,template parameter, it is set to int in this case
	std::cout << "max is " << maximum<int>(a, b) << std::endl;
	std::cout << "min is " << minimum<int>(a, b) << std::endl;

	float c = 9.5;
	float d = 5.6;
	//must define T,template parameter, it is set to float in this case
	std::cout << "max is " << maximum<float>(c, d) << std::endl;
	std::cout << "min is " << minimum<float>(c, d) << std::endl;

	double e = 3.14;
	double f = 7.14;
	//must define T,template parameter, it is set to double in this case
	std::cout << "max is " << maximum<double>(e, f) << std::endl;
	std::cout << "min is " << minimum<double>(e, f) << std::endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
