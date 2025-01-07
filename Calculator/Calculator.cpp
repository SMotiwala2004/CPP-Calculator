#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>

using namespace std;

/*
Functions
- Multiplication
- Subtraction
- Division
- Addition
- Main Function(CLI)
*/

string addition(int num1, int num2) {
	return "The addition of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1+num2);
}

string subtraction(int num1, int num2) {
	return "The subtraction of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1-num2);
}

string multiplication(int num1, int num2) {
	return "The multiplication of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1*num2);
}

string division(int num1, int num2) {
	return "The division of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(floor(num1/num2));
}


int main() {
	// Declare num1 and num2 to store variables for their operation
	int num1;
	int num2;
	int operatorInput;
	// Welcome message, pre defined allows formatting
	string menuMessage = 
R"(--- Calculator ---
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Exit Application
)";
	cout << menuMessage << endl;
	cin >> operatorInput;
	
	switch (operatorInput) {
	case 1: 
		cout << "Enter the first number you would like to add" << endl;
		cin >> num1;
		cout << "Enter the second number you would like to add" << endl;
		cin >> num2;
		cout << addition(num1, num2) << endl;
		break;
	case 2:
		cout << "Enter the first number you would like to subtract" << endl;
		cin >> num1;
		cout << "Enter the second number you would like to subtract" << endl;
		cin >> num2;
		cout << subtraction(num1, num2) << endl;
		break;
	case 3:
		cout << "Enter the first number you would like to multiply" << endl;
		cin >> num1;
		cout << "Enter the second number you would like to multiply" << endl;
		cin >> num2;
		cout << multiplication(num1, num2) << endl;
		break;
	case 4:
		cout << "Enter the first number you would like to divide" << endl;
		cin >> num1;
		cout << "Enter the second number you would like to divide" << endl;
		cin >> num2;
		cout << division(num1, num2) << endl;
		break;
	case 5:
		// Tell the user thanks for using the program, then exit;
		cout << "Thank's for using the calculator!";
		this_thread::sleep_for(chrono::seconds(1));
		exit(0);
	default:
		cout << "Invalid Operation. Please try again!" << endl;
		main();
	}
}