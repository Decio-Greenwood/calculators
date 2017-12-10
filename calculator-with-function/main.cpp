#include <iostream>
#include <string>
using namespace std;

int userChoice () {
    int choice; /* to hold the choice of operation*/
    bool validChoice; /*to check if the user choice is valid*/
    do {
        cout << "For addition, enter 1; \n" ;
        cout << "For subtraction, enter 2; \n" ;
        cout << "For multiplication, enter 3; \n" ;
        cout << "For division, enter 4; \n" ;
        cout << "To find the remainder of a division, enter 5; \n" ;
        cin >> choice;
        if (choice>=1 and choice<=5){
            validChoice=true;
        }
        else {
            cout << "\nPlease enter a number between 1 and 5.\n\n";
            validChoice=false;
        }
    } while (validChoice==false);
	return choice;
}

void calculation(int choice) {
	int num01 , num02, result; /* to hold number and result for operations */

	cout<< endl;
    switch (choice) { /* Selects correct operand */
        case 1:
			cout << "Enter your first number: \n";
			cin >> num01;
			cout << "Enter your second number: \n" ;
			cin >> num02;
			result = num01 + num02;
			cout <<"\n"<<num01<<"+"<<num02<<"="<<result;
			break;
		case 2:
			cout << "Enter your first number: \n";
			cin >> num01;
			cout << "Enter your second number: \n" ;
			cin >> num02;
			result = num01 - num02;
			cout <<"\n"<<num01<<"-"<<num02<<"="<<result;
			break;
		case 3:
			cout << "Enter your first number: \n";
			cin >> num01;
			cout << "Enter your second number: \n" ;
			cin >> num02;
			result = num01 * num02;
			cout <<"\n"<<num01<<"*"<<num02<<"="<<result;
			break;
		case 4:
			cout << "Enter your first number: \n";
			cin >> num01;
			cout << "Enter your second number: \n" ;
			cin >> num02;
			result = num01 / num02;
			cout <<"\n"<<num01<<"/"<<num02<<"="<<result;
			break;
		case 5:
			cout << "Enter your first number: \n";
			cin >> num01;
			cout << "Enter your second number: \n" ;
			cin >> num02;
			result = num01 % num02;
			cout <<"\n"<<num01<<"%"<<num02<<"="<<result;
			break;
    }
    cout<<endl;
}

int main() {
	bool stayOn=true; /* To determine if user wants to turn calculator off */
	int choice; /* to hold the choice of operation*/
	cout << "Welcome to our calculator! \n \n"; /*introduction for when the program starts*/

	while (stayOn == true){

		/* Menu for calculator */
        choice=userChoice();
		calculation(choice);

		cout << "\nIf you would like to do another calculation enter 1, otherwise enter 0. \n";
		cin >> stayOn;
		cout << "\n \n";

	}
	return 0;
}
