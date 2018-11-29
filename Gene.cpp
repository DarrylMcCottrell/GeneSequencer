#include <iostream>
#include <Gene.h>
#include <fstream>

using namespace std;



Gene::Gene(Allele AA,Allele AB){
	setAlleleA(AA);
	setAlleleB(AB);
};


void WriteToFile(ofstream& of){
			of.open("testData.txt");
			of << name << traitType;
			AlleleA.WriteAlleleToFile(of);
			AlleleB.WriteAlleleToFile(of);
			of.close();			
		};

Allele Gene::GetExpressedTrait(){};

bool Gene::RunUnitTest(){};