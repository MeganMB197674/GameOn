/* Megan Boyer
Game On Assignment - CSC215
2/14/2023 */

// '#include' allows us to use code from the STL (Standard Template Library) in C++. 
// 'iostream' stands for input and output stream and allows us to collect input from the user and output to the screen/console.
#include <iostream>

// This allows me to omit using the std:: (standard library template command) every time I wish to use <iostream>.
using namespace std;

// This is our main function. 
// Every C++ program MUST have a main function and there can only be ONE main function.
// 'int' denotes that we are returning an integer, and main indicates that this is our starting point.
int main() {
	// 'cout' can be thought of as 'console out.' It outputs to the screen.
	// The less than sign can be thought of as a funnel. It takes whatever is on the opening side and funnels it to the left.
	// In this case, it takes the string and funnels it to the console output.
	// 'endl' stands for end of line and acts as a line break.
	cout << "This is my very first C++ program. It is called:" << endl;
	cout << "Game On!" << endl;
	cout << "Did you enjoy this program? Please rate it from 1-3." << endl;
	cout << "1 - Not satisfactory" << endl;
	cout << "2 - Okay, but could be better" << endl;
	cout << "3 - I loved it!" << endl;
	// variable declaration.
	int rating;
	// Get user input and set rating to input.
	cout << "Rating Entered:"; cin >> rating;
	// write conditional statement to write to the console.
	// If the rating entered is equal to one, print the following on line 33.
	if (rating == 1) {
		cout << "Oh no! We're sorry you had a negative UX, we will work on this right away." << endl;
	}
	// If the rating entered is equal to two, print the following on line 37.
	else if (rating == 2) {
		cout << "We're glad you found this application somewhat satisfactory. We will continuously improve, so come back soon!" << endl;
	}
	// If the rating is equal to three, print the following on line 41.
	else if(rating == 3); {
		cout << "Fantastic! Thank you for your feedback." << endl;
	}
	// Because we are returning an integer, the program ends by returning 0.
	return 0;
}