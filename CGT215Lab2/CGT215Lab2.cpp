// CGT215Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
//This following line tells you that you'd like to be inside the standard library namespace. Allows you to use input + output functions cin 
// and cout without needing to prepend with std::
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	//Cout is how we print to the screen
	cout << "Hello my name is Shreyas and this program will help solve for x in the equation: ";
	cout << "Ax + B = 0" << endl;
	//Endl takes us to the next line on the terminal so like a enter key
	cout << endl;
	cout << "Enter a value for A: " << endl;
	cin >> A;
	cout << "Enter a value for B: " << endl;
	//Cin is how we get user input from the terminal
	cin >> B;
	cout << "Solving " << A << "x + " << B << " for x..." << endl;
	X = (0 - B) / A;
	cout << "The answer is: " << endl;
	cout << "X = " << X << endl;

}