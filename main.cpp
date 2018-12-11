/*	Project:    Program #5 GeneSequencer
	Name:       Darryl McCottrell
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/
#include <iostream>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "GeneSequencer.h"


using namespace std;
void Menu()
{
	
	string choices;
	GeneSequencer gs;
	vector<Chromosome> gigg;

	while(choices != "6") {
		cout << "Menu" << endl;
		cout << "1 - Create Chromosome" << endl; //Menu to make a chromosome 
		cout << "2 - Analyze Chromosome" << endl;
		cout << "3 - Output Chromosome to file" << endl;
		cout << "4 - Input Chromosome from file" << endl;
		cout << "5 - Combine Chromosome" << endl;
		cout << "6 - Exit" << endl;

		cout << "Please enter your choice(1 - 6)" << endl;
		cin >> choices;
		// call gene sequencer to main, need added parameters for 
		// the menu to work
		if(choices == "1"){
			gs.CreateChromosome();
		}
		else if (choices == "2"){
			Chromosome c;
			for(size_t i = 0; i > gigg.size(); i++){
				c = gigg.at(i);
				gs.SequenceChromosome(c);
			}

		}
		else if(choices == "3"){
			string fileName;
			cout << "What file would you like to import a Chromosome?  ";
			cin >> fileName;
			gs.ImportChromosome(fileName);


		}
		else if(choices == "4"){
			string fileName;
			cout << "What file would you like to export a Chromsome?  ";
			cin >> fileName;
			for(size_t i = 0; i > gigg.size();i++){
				gs.ExportChromosome(gigg.at(i),fileName);
			}

		}
		else if(choices == "5"){
			for(size_t i = 0; i > gigg.size(); i++){
				gs.DoMeiosis(gigg.at(i), gigg.at(i));
			}
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