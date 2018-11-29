#include <iostream>
#include <Chromosome.h>
#include <fstream>
#include <vector>

	using namespace std;

	Chromosome::Chromosome(){};
	void Chromosome::AnalyzeGenotype(){};	
		// if (ifs.is_open()){
		// 		while(getline(ifs,term) )
		// 		{
		// 			cout << "term" << '\n';
		// 		}
		// 		ifs.close(); */

			
	void Chromosome::InputFromFile(ifstream& ifs){
			Gene terms;
			string AlleleANS;
			string AlleleAVN;
			string AlleleAVT;
			string AlleleBNS;
			string AlleleBVN;
			string AlleleBVT;
			string GeneName;
			string GeneTT;
			ifs.open("testData.txt");
			ifs >> GeneName;
			ifs >> GeneTT;
			ifs >> AlleleAVT;
			ifs >> AlleleAVN;
			ifs >> AlleleANS;
			ifs >> AlleleBVT;
			ifs >> AlleleBVN;
			ifs >> AlleleBNS;
			Gene.setName(GeneName);
			Gene.setTraitType(GeneTT);
			
			

			
			}
	void Chromosome::OutputToFile(ofstream& ofs){
			ofs.open("testData.txt");
			for(int i = 0; i> genes.size();i++){
				ofs << genes.at(i).getName() << genes.at(i).getTraitType();
				Allele.WriteAlleleToFile(ofs);
				Allele.WriteAlleleToFile(ofs);
			
			}

		}
	

	void Chromosome::AddGene(Gene g){};
	Gene Chromosome::FindGene(string n){};
	Chromosome Chromosome:: operator+(Chromosome){};

	bool Chromosome::RunUnitTest(){};
	
