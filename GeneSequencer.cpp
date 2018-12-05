#include <iostream>
#include "GeneSequencer.h"
#include <fstream>

		using namespace std;

		Chromosome GeneSequencer::CreateChromosome(){
		  Chromosome c;
		  string Chromname;
		  int geneCount;
		  cout << "What is the Chromosome name? ";
		  cin >> Chromname;
		  cout << "What is the Chromosome gene count? ";
		  cin >> geneCount;
		};
		Chromosome GeneSequencer::ImportChromosome(const string& fileName = ""){
				ifstream file;
				file.open("fileName.txt");
				Chromosome c;
				c.InputFromFile(file);
				file.close();

				return c;
		// Takes the Chromosomes from the InputFromFIle in the Chromosome cpp file

		}
		void GeneSequencer::ExportChromosome(Chromosome c, const string& fileName = ""){
			ofstream file;
			file.open("fileName.txt");
			c.OutputToFile(file);
			file.close();

		}
		Chromosome GeneSequencer::DoMeiosis(Chromosome x, Chromosome y){
			Chromosome bug;
			bug = x+y;

			return bug;
	
		}
		void GeneSequencer::SequenceChromosome(Chromosome c){
			c.AnalyzeGenotype();
		}

		bool GeneSequencer::PowerOnSelfTest(){}