#include <iostream>
#include <GeneSequencer.h>
#include <fstream>

		using namespace std;

		Chromosome GeneSequencer::CreateChromosome(){};
		Chromosome GeneSequencer::ImportChromosome(const string& fileName = ""){};
		void GeneSequencer::ExportChromosome(Chromosome c, const string& fileName = ""){};
		Chromosome GeneSequencer::DoMeiosis(Chromosome x, Chromosome y){};
		void GeneSequencer::SequenceChromosome(Chromosome c){};

		bool GeneSequencer::PowerOnSelfTest(){};