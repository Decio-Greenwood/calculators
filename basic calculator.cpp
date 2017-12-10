#include <iostream>
using namespace std;

int main() {
	bool stayOn=true; /* To determine if user wants to turn calculator off */
	
	cout << "Welcome to our calculator! \n \n"; /*introduction for when the program starts*/
	
	while (stayOn == true){
		int choice; /* to hold the choice of operation*/
		bool badChoice; /* in case user chooses an invalid number */
		int x , y; /* to hold number for operations, variable 'x' will always hold the result */
		
		badChoice=false;
		
		/* Menu for calculator */
		cout << "For addition, enter 1; \n" ;
		cout << "For subtraction, enter 2; \n" ;
		cout << "For multiplication, enter 3; \n" ;
		cout << "For division, enter 4; \n" ;
		cout << "To find the remainder of a division, enter 5; \n" ;
		cin >> choice;
		cout << "\n \n";
				
		switch (choice) { /* Selects correct operand or tells user to reenter their choice in case is invalid */
			case 1:
				cout << "Enter your first number: \n";
				cin >> x;
				cout << "Enter your second number: \n" ;
				cin >> y;
				x = x + y;
				cout << "The result is: " << x << "\n \n";
				break;
			case 2:
				cout << "Enter your first number: \n";
				cin >> x;
				cout << "Enter your second number: \n" ;
				cin >> y;
				x = x - y;
				cout << "The result is: " << x << "\n \n";
				break;
			case 3:
				cout << "Enter your first number: \n";
				cin >> x;
				cout << "Enter your second number: \n" ;
				cin >> y;
				x = x * y;
				cout << "The result is: " << x  << "\n \n";
				break;
			case 4:
				cout << "Enter your first number: \n";
				cin >> x;
				cout << "Enter your second number: \n" ;
				cin >> y;
				x = x / y;
				cout << "The result is: " << x << "\n \n";
				break;
			case 5:
				cout << "Enter your first number: \n";
				cin >> x;
				cout << "Enter your second number: \n" ;
				cin >> y;
				x = x % y;
				cout << "The result is: " << x << "\n \n";
				break;
			default:
				cout << "Please enter a valid number. \n \n";
				badChoice = true;
		}
		
		if (badChoice == false) { /* gives option to close or retry. but automatically makes while loop go over if a incorrect option was chosen */
			cout << "If you would like to do another calculation enter 1, otherwise enter 0. \n";
			cin >> stayOn;
			cout << "\n \n";
		}
		else {
			badChoice=false;
		}
	}
	return 0;
}