#include <iostream>
#include "Chromosome.h"
#include <fstream>
#include <vector>


	using namespace std;
	int Chromosome::NumberLines(ifstream &ifs){
		int NumberLines = 0;
		string lines;
		while(getline(ifs, lines)){
		++NumberLines;}
		return NumberLines;

	}
	Chromosome::Chromosome(){
		Gene g;
		string name;
		string type;
		string AlleleANucleotideSequence;
		string AlleleAVariantName;
		string AlleleAVariantType;
		string AlleleBVariantName;
		string AlleleBVariantType;
		string AlleleBNucleotideSequence;

		cout << "What is the name of the Gene: ";
		cin >> name;
		cout << "What is the trait type of the Gene: ";
		cin >> type;
		cout << "What is the AlleleA nucleotide sequence of the Gene: ";
		cin >> AlleleANucleotideSequence;
		cout << "What is the AlleleA variant name of the Gene: ";
		cin >> AlleleAVariantName;
		cout << "What is the AlleleA variant type of the Gene: ";
		cin >> AlleleAVariantType;
		cout << "What is the AlleleB nucleotide sequence of the Gene: ";
		cin >> AlleleBNucleotideSequence;
		cout << "What is the AlleleB variant name of the Gene: ";
		cin >> AlleleBVariantName;
		cout << "What is the AlleleB variant type of the Gene: ";
		cin >> AlleleBVariantType;
		
		g.setName(name);
		g.setTraitType(type);
		g.setAlleleA(Allele(AlleleANucleotideSequence,AlleleAVariantName,AlleleAVariantType));
		g.setAlleleB(Allele(AlleleBNucleotideSequence,AlleleBVariantName,AlleleBVariantType));
		g = Gene(g.getAlleleA(), g.getAlleleB());
	}
	void Chromosome::AnalyzeGenotype(){ // can't compare an int and a .size so has to use size_t
			for(size_t i = 0; i < genes.size(); i++){
				cout << "Gene " << (i+1) << endl;
		cout << "Name: " << genes.at(i).getName() << endl;
		cout << "Genetic trait: " << genes.at(i).getTraitType() << endl;
		cout << "Expressed Allele:  " << endl;
			if ((genes.at(i).GetExpressedTrait()) == (genes.at(i).getAlleleA())){
				cout << genes.at(i).getAlleleA().getVariantName() << endl;
				cout << "Nucleotide Sequence:  " << genes.at(i).getAlleleA().getNucleotideSequence() << endl;
			} else if((genes.at(i).GetExpressedTrait()) == (genes.at(i).getAlleleB())){
				cout << genes.at(i).getAlleleB().getVariantName() << endl;
				cout << "Nucleotide Sequence:  " <<genes.at(i).getAlleleB().getNucleotideSequence() << endl;
			}
		
	}
	};
	
// For genes.at(i) , find the expressed trait with GetExpressedTrait(),.
//This will give you an Allele.
//Then, compare the  Allele to AlleleA and AlleleB
//in genes.at(i). If one or the other is the same as the Allele, then
//print either AlleleA or AlleleB's VariantName with GetVariantName()
		
		

			
	void Chromosome::InputFromFile(ifstream& ifs) 
	{
	for(int i = 0; i < NumberLines(ifs); i++){
			Gene terms;
			string AlleleAseq;
			string AlleleAname;
			string AlleleAtype;
			string AlleleBseq;
			string AlleleBname;
			string AlleleBtype;
			string GeneName;
			string GeneTT;
		 // inputing data of strings into the ifstream
			ifs >> GeneName;
			ifs >> GeneTT;
			ifs >> AlleleAtype;
			ifs >> AlleleAname;
			ifs >> AlleleAseq;
			ifs >> AlleleBtype;
			ifs >> AlleleBname;
			ifs >> AlleleBseq;
			
			terms.setName(GeneName);
			terms.setTraitType(GeneTT);
			terms.setAlleleA(Allele(AlleleAseq,AlleleAname,AlleleAtype));
			terms.setAlleleB(Allele(AlleleBseq,AlleleBname,AlleleBtype));

	}
			
			
			// 	
} 
	void Chromosome::OutputToFile(ofstream& ofs){
			for(size_t i = 0; i < genes.size();i++){
				ofs << genes.at(i).getName() << genes.at(i).getTraitType();
				genes.at(i).getAlleleA().WriteAlleleToFile(ofs);
				genes.at(i).getAlleleB().WriteAlleleToFile(ofs);
			
			} // write to a file 

		}
	

	void Chromosome::AddGene(Gene g){
		genes.push_back(g);
		
		// In the addGene function I would use a pushback vector because it's the only vector that adds/appends a new element
	}
	Gene Chromosome::FindGene(string nug){
				Gene g;		
		for(size_t i = 0; i < genes.size(); i++){
			if(genes.at(i).getName() == nug){
				g=genes.at(i);
			}
		}
		
		return g;
	}
	Chromosome Chromosome:: operator+(Chromosome c){
		Chromosome newChrom;
		if(this-> genes.size() > c.genes.size() ){
			for(size_t i = 0; i > c.genes.size(); i++){
				Gene g;
				g.setAlleleA(this-> genes.at(i).GetExpressedTrait());
				g.setAlleleB(c.genes.at(i).GetExpressedTrait());
				g = Gene(g.getAlleleA(),g.getAlleleB());
				newChrom.AddGene(g);
				
			}
		} 
		else if(this-> genes.size() < c.genes.size()){
			for(size_t i = 0; i > this-> genes.size(); i++){
				Gene g;
				g.setAlleleA(this-> genes.at(i).GetExpressedTrait());
				g.setAlleleB(c.genes.at(i).GetExpressedTrait());
				g = Gene(g.getAlleleA(),g.getAlleleB());
				newChrom.AddGene(g);
			
			}
		}
		else(genes.size() == c.genes.size());{
			for(size_t i = 0; i > genes.size(); i++){
				Gene g;
				g.setAlleleA(genes.at(i).GetExpressedTrait());
				g.setAlleleB(c.genes.at(i).GetExpressedTrait());
				g = Gene(g.getAlleleA(), g.getAlleleB());
				newChrom.AddGene(g);

			}
		}
		return c;
		
	};

	

	bool Chromosome::RunUnitTest(){
		return true;
	};
	
