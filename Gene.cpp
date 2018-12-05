#include <iostream>
#include "Gene.h" //adding my h files coding to my cpp file
#include <fstream>

	using namespace std;


// calling my Gene constructors helps set my Genes from the h file into my cpp file
Gene::Gene(Allele AA,Allele AB){
	setAlleleA(AA);
	setAlleleB(AB);
}

void Gene::WriteToFile(ofstream& of){
	//Writing my AlleleA and AlleleB to file in my ofstream
			of.open("testData.txt");
			of << name << traitType;
			AlleleA.WriteAlleleToFile(of);
			AlleleB.WriteAlleleToFile(of);
			of.close();			
		}
// Having all of my getters and setters set in my cpp file from my Gene.h file
void Gene::setName(string givenName){
			name = givenName;
		}
void Gene::setTraitType(string givenTrait){
			traitType = givenTrait;
		}
void Gene::setAlleleA(Allele givenAlleleA){
			AlleleA = givenAlleleA;
		}
void Gene::setAlleleB(Allele givenAlleleB){
			AlleleB = givenAlleleB;
}
string Gene::getName(){
			return name;
		}
string Gene::getTraitType(){
			return traitType;
		}
Allele Gene::getAlleleA(){
			return AlleleA;
		}
Allele Gene::getAlleleB(){
			return AlleleB;
		}		
Allele Gene::GetExpressedTrait(){
	Allele a;
	return a;
}

bool Gene::RunUnitTest(){
	Gene testData;

	cout << "begin Testing" << endl;

	testData.setName("name");
	if(testData.getName() == "name"){
		cout << "Passed set/get name" << endl;
	}
	testData.setTraitType("traitType");
	if(testData.getTraitType() == "traitType"){
		cout << "Passed set/get trait type" << endl;
	}
	return true;
}