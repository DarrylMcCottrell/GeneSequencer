/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>

using namespace std;
void Menu()
{
	string chromosone;
	string choices;

	while(choices != "6") {
		cout << "Menu" << endl;
		cout << "1 - Create Chromosone" << endl;
		cout << "2 - Analyze Chromosone" << endl;
		cout << "3 - Output Chromosone to file" << endl;
		cout << "4 - Input Chromosone from file" << endl;
		cout << "5 - Combine Chromosone" << endl;
		cout << "6 - Exit" << endl;

		cout << "Please enter your choice(1 - 6)" << endl;
		cin >> choices;
	}
}
int main(int argc, char *argv[])
{
	Menu();

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}