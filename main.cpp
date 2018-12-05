/*	Project:    Program #5 GeneSequencer
	Name:       Darryl McCottrell
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include "GeneSequencer.h"

using namespace std;
void Menu()
{
	string chromosone;
	string choices;
	GeneSequencer gs;

	while(choices != "6") {
		cout << "Menu" << endl;
		cout << "1 - Create Chromosone" << endl; //Menu to make a chromosome 
		cout << "2 - Analyze Chromosone" << endl;
		cout << "3 - Output Chromosone to file" << endl;
		cout << "4 - Input Chromosone from file" << endl;
		cout << "5 - Combine Chromosone" << endl;
		cout << "6 - Exit" << endl;

		cout << "Please enter your choice(1 - 6)" << endl;
		cin >> choices;

		if(choices == "1"){
			gs.CreateChromosome();
		}
		else if (choices == "2"){
			gs.SequenceChromosome();

		}
		else if(choices == "3"){
			gs.ImportChromosome();

		}
		else if(choices == "4"){
			gs.ExportChromosome();
		}
		else if(choices == "5"){
			gs.DoMeiosis();
		}
		else if(choices == "6"){
			cout << "Thank you, Goodbye" << endl;
		}
	};
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