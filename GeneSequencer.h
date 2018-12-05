#pragma once
#include <iostream>
#include "Chromosome.h"
#include <fstream>

	using namespace std;

	class GeneSequencer{
		public:
		Chromosome CreateChromosome();
		Chromosome ImportChromosome(const string& fileName);
		void ExportChromosome(Chromosome c, const string& fileName);
		Chromosome DoMeiosis(Chromosome x, Chromosome y);
		void SequenceChromosome(Chromosome c);

		bool PowerOnSelfTest();
	};