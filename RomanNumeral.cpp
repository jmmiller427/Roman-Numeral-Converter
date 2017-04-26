// Name: John Miller
// Date: 20 September 2015
// Email: jmmi234@g.uky.edu
// Purpose: To take an input from the user and give a roman numeral of that number back
// the program will help teach us how to use do-while loops and switch statements

#include <string>
#include <iostream>

using namespace std;

int main()
{
	//start the roman numeral string
	string roman_numeral = "";

	//initialize each digit as a variable
	int four_digit_number;
	int first_space;
	int second_space;
	int third_space;
	int fourth_space;

	// start a do-while loop for the user input
	do
	{
		// print out opening messages
		cout<<"Integer--Roman Number Conversion Tool:"<<endl;
		cout<<"Enter -1 to quite the program"<<endl;
		cout<<"Please enter a positive integer less than 4,000 you wish to convert: ";
		//get the user input
		cin>> four_digit_number;

		//if statement for if user enters -1
		if (four_digit_number == -1)
		{
			continue;
		}

		//if statement for if user enters invalid number
		if (four_digit_number <= 0 || four_digit_number>= 4000)
		{
			cout<<"Your number must be greater than 0 and less than 4000"<<endl;
			continue;
		}
		
		//get the last digit and then divide number by 10 to get rid of the last digit
		fourth_space = four_digit_number % 10;
		four_digit_number = four_digit_number / 10;

		//get the third digit and divide by 10 to get rid of third digit
		third_space = four_digit_number % 10;
		four_digit_number = four_digit_number / 10;

		//get the second digit and divide by 10 to get rid of it
		second_space = four_digit_number % 10;
		four_digit_number = four_digit_number / 10;

		//get the first digit
		first_space = four_digit_number % 10;

		//start switch for first digit
		switch (first_space)
		{
		// each case represents a possible number
		case 0: roman_numeral = roman_numeral + "";
		break;
		case 1: roman_numeral = roman_numeral + "M";
		break;
		case 2: roman_numeral = roman_numeral + "MM";
		break;
		case 3: roman_numeral = roman_numeral + "MMM";	
		break;
		}

		// start swtich for second digit
		switch (second_space)
		{
		// each case represents a possible number
		case 0: roman_numeral = roman_numeral + "";
		break;
		case 1: roman_numeral = roman_numeral + "C";
		break;
		case 2: roman_numeral = roman_numeral + "CC";
		break;
		case 3: roman_numeral = roman_numeral + "CCC";
		break;
		case 4: roman_numeral = roman_numeral + "CD";
		break;
		case 5: roman_numeral = roman_numeral + "D";
		break;
		case 6: roman_numeral = roman_numeral + "DC";
		break;
		case 7: roman_numeral = roman_numeral + "DCC";
		break;
		case 8: roman_numeral = roman_numeral + "DCCC";
		break;
		case 9: roman_numeral = roman_numeral + "CM";
		break; 
		}

		// start switch for third digit
		switch (third_space)
		{
		// each case represents a possible number
		case 0: roman_numeral = roman_numeral + "";
		break;
		case 1: roman_numeral = roman_numeral + "X";
		break;
		case 2: roman_numeral = roman_numeral + "XX";
		break;
		case 3: roman_numeral = roman_numeral + "XXX";
		break;
		case 4: roman_numeral = roman_numeral + "XL";
		break;
		case 5: roman_numeral = roman_numeral + "L";
		break;
		case 6: roman_numeral = roman_numeral + "LX";
		break;
		case 7: roman_numeral = roman_numeral + "LXX";
		break;
		case 8: roman_numeral = roman_numeral + "LXXX";
		break;
		case 9: roman_numeral = roman_numeral + "XC";
		break;
		}

		//start swtich for last space
		switch (fourth_space)
		{
		// each case represents a possible number
		case 0: roman_numeral = roman_numeral + "";
		break;
		case 1: roman_numeral = roman_numeral + "I";
		break;
		case 2: roman_numeral = roman_numeral + "II";
		break;
		case 3: roman_numeral = roman_numeral + "III";
		break;
		case 4: roman_numeral = roman_numeral + "IV";
		break;
		case 5: roman_numeral = roman_numeral + "V";
		break;
		case 6: roman_numeral = roman_numeral + "VI";
		break;
		case 7: roman_numeral = roman_numeral + "VII";
		break;
		case 8: roman_numeral = roman_numeral + "VIII";
		break;
		case 9: roman_numeral = roman_numeral + "IX";
		break;
		}

		// output message of what the roman numeral is
		cout << "The roman numeral is: "<< roman_numeral <<endl;
		cout << "" <<endl;

		// sets the roman numeral input back to empty
		roman_numeral = "";

	}while (four_digit_number != -1);
	// ends the do-while loop with while the digit entered is not -1

	cout << "" << endl;
	cout << "Thank you for using the Integer--Roman Numeral Tool." << endl;
	cout << "" << endl;

	// pause the program
	system ("pause");

	return 0;
}
