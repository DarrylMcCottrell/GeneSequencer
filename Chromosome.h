 #include <iostream>
 #include "Gene.h"
 #include <vector>
 #include <fstream>

	using namespace std;

	class Chromosome{
		
		private:
		vector<Gene> genes;
		
		

		
		public:
		int NumberLines(ifstream &ifs);
		Chromosome();
		void AnalyzeGenotype();
		string term;
		void InputFromFile(ifstream& ifs);
		void OutputToFile(ofstream& ofs);
		void AddGene(Gene g);
		Gene FindGene(string nug);
		Chromosome operator+(Chromosome);

		bool RunUnitTest();

		


	};