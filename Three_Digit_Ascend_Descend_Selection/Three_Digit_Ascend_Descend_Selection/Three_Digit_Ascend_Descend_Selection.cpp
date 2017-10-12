/*

Sam Bryant & Dorothy Bui - 10/5/17 - 2

Assignment Name : Three digit Ascend Descend Selection

Take in 3 digits from the user, seperate those digits and say whether they ascend descend or neither.

Edited by Zayam Tariq

*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	int i = 0;
	for (;i <= 30; i++) {
		int x;


		//define variables:
		int userNumber;
		int digit1;
		int digit2;
		int digit3;

		//ask for variable

		cout << "Give me a three digit number" << endl;

		// take in variable

		cin >> userNumber;


		// seperate number to 3 digits;

		digit1 = userNumber / 100; //int division, creates the hundreds-value number
		digit2 = userNumber % 100;
		digit2 = digit2 / 10; // creates the tens-value number
		digit3 = userNumber % 10; // creates the ones-value number

		// display
		cout << "The first digit is " << digit1 << " and the second digit is " << digit2 << " and the last digit is " << digit3 << endl;
		//calculate ascending descending or neither:
		if (digit1 > digit2 && digit2 > digit3) { // the hundreds-value digit is greater than the tens-value digit is greater than the ones-value digit
			cout << "Your number is descending!" << endl;
		}
		else if (digit1 < digit2 && digit2 < digit3) { // the hundreds-value digit is less than the tens-value digit is less than the ones-value digit
			cout << "Your number is ascending!" << endl;  // It's not the first condition, but it matches the second condition, so you use "else if"
		}
		else { // number is not descending, number is not ascending, use "else" to show that it doesn't match the first OR the second condition
			cout << "Your number is neither ascending or descending." << endl;
		}
	}
	pause(); // pauses to see the displayed text
}


