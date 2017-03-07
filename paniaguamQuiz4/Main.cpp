#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>
#include <string>
using namespace std;

void userInput(double &);						//function validate user input
void showMenu(string &);						//function display menu
void circleObject(Circle &, string);			//function which parameters are instances of circles, squares or triangles
void squareObject(Square &, string);
void triangleObject(Triangle &, string);

int main()
{
	string choice;

	Circle circle1;
	Square square1;
	Triangle triangle1;

	showMenu(choice);																				//calls menu

	do
	{
		if (choice == "1" || choice == "1a" || choice == "1b" || choice == "1c")					//call circleobject function
		{
			circleObject(circle1, choice);
			showMenu(choice);
		}
		else if (choice == "2" || choice == "2a" || choice == "2b" || choice == "2c")				//call squareobject function
		{
			squareObject(square1, choice);
			showMenu(choice);
		}
		else if (choice == "3" || choice == "3a" || choice == "3b" || choice == "3c")				//call triangleobject function
		{
			triangleObject(triangle1, choice);
			showMenu(choice);
		}
		else if (choice == "4")																		//end program
		{
			cout << "end of program" << endl;
			system("pause");
			return 0;
		}
		else
		{
			cout << "Please enter a valid menu option" << endl;										//prompt user for valid menu entry
			getline(cin, choice);
		}
			
	} while (choice != "4");	
}

void showMenu(string &c)
{
	cout << "Classes and Shapes" << endl;															//display menu
	cout << "\n1. Create a Circle" << endl;
	cout << "1a. increase length of radius of circle by 1 unit" << endl;
	cout << "1b. decrease length of radius of circle by 1 unit" << endl;
	cout << "1c. Display property values of circle" << endl;

	cout << "===============================================================" << endl;

	cout << "2. Create a Square" << endl;
	cout << "2a. increase length of side of square by 1 unit" << endl;
	cout << "2b. decrease length of side of square by 1 unit" << endl;
	cout << "2c. Display property values of square" << endl;

	cout << "===============================================================" << endl;

	cout << "3. Create a Triangle" << endl;
	cout << "3a. increase length of base and height of triangle by 1 unit" << endl;
	cout << "3b. decrease length of base and height of triangle by 1 unit" << endl;
	cout << "3c. Display property values of triangle" << endl;

	cout << "===============================================================" << endl;

	cout << "4. Quit" << endl;

	getline(cin, c);

}

void userInput(double &input)
{
	string ui;
	double num = 0;
	char nextChar;	
	int counter = 0;

	
	getline(cin, ui);
	int strLength = ui.length();

	while (counter < strLength || strLength == 0)								//validates user input is a number, prompts user when any character other than a number detected
	{
		if (!isdigit(ui[counter]))
		{
			cout << "Invalid input, try again\n";
			getline(cin, ui);
			strLength = ui.length();
			counter = 0;
		}
		else
		{
			counter++;
		}
	}
	counter = 0;
	while (counter < strLength)													//converts string to double
	{
		nextChar = ui[counter];

		if (isdigit(nextChar))
		{
			num = num * 10 + (nextChar - '0');
		}
		counter++;
	}
	input = num;
}

void circleObject(Circle &c1, string ch)
{
	double input;

	if (ch == "1")
	{
		cout << "Enter radius: ";
		userInput(input);													//prompts user for radius
		c1.setRadius(input);												//sets radius of circle object

		cout << c1;															//displays circles stats
	}
	else if (ch == "1a")
	{
		c1++;																//increases circles radius
		cout << "Done!" << endl;
	}
	else if (ch == "1b")
	{
		c1--;																//decreases circles radius
		cout << "Done!" << endl;
	}
	else if (ch == "1c")
	{
		cout << c1;															//displays circles stats
	}
	

	system("pause");
	system("cls");
}

void squareObject(Square &s1, string ch)
{
	double input;

	if (ch == "2")
	{
		cout << "Enter length of sides: ";									//prompts user for length
		userInput(input);
		s1.setLength(input);	

		cout << s1;															//displays squares stats
	}
	else if (ch == "2a")
	{
		s1++;																//increases length
		cout << "Done!" << endl;
	}
	else if (ch == "2b")
	{
		s1--;																//decreases length
		cout << "Done!" << endl;
	}
	else if (ch == "2c")
	{
		cout << s1;															//displays squares stats
	}

	system("pause");
	system("cls");
}

void triangleObject(Triangle &t1, string ch)
{
	double input;

	if (ch == "3")
	{
		cout << "Enter length of base: ";									//prompts user length of base
		userInput(input);
		t1.setBase(input);

		cout << "Enter height: ";											//prompts user height
		userInput(input);
		t1.setHeigth(input);

		cout << t1;
	}
	else if (ch == "3a")
	{
		t1++;																//increases base and height
		cout << "Done!" << endl;
	}
	else if (ch == "3b")
	{
		t1--;																//decreases base and height
		cout << "Done!" << endl;
	}
	else if (ch == "3c")
	{
		cout << t1;															//displays stats
	}

	system("pause");
	system("cls");
}