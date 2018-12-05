 #include <iostream>
 #include "Allele.h" // adding h files coding to cpp file
 #include <fstream>

using namespace std;

	

	void Allele::WriteAlleleToFile(ofstream& of){
			of.open("testData.txt");
			of << "variantName" << "," << "variantType" << "," << "nucleotideSequence" << "\n";
			of.close();
	};
	// writing allele strings to file in the csv. file 

	// setting my getters and setters from the h file in the cpp file
	void Allele::setNucleotideSequence(string givenSequence){
			nucleotideSequence = givenSequence;
		}
	void Allele::setVariantName(string givenVariantName){
			variantName = givenVariantName;
		}
	void Allele::setVariantType(string givenVariantType){
			variantType = givenVariantType;
		}
	string Allele::getNucleotideSequence(){
			return nucleotideSequence;
		}
	string Allele::getVariantName(){
			return variantName;
		}
	string Allele::getVariantType(){
			return variantType;
		}
			// calling my Allele constructors to help set my Alleles given through the h file
	Allele::Allele(string seq,string name,string type){  
		nucleotideSequence = seq;
		variantName = name;
		variantType = type;
	}
	// using operator in Allele to help prevent errors in Chromosome class when inputting code in the Chromosome class it will overload if I don't
	// have an operator that nuetralizes it making it error free
		
	bool Allele::operator==(Allele giggity){
			bool goo = false;
			if(this-> getVariantName() == giggity.getVariantName()){
				if(this-> getVariantType() == giggity.getVariantType()){
					if(this-> getNucleotideSequence() == giggity.getNucleotideSequence()){
							goo = true;
					}
				}
			}
			return goo;
	}

	bool Allele::RunUnitTest(){
		Allele testdata;

		cout << "begin testing" << endl;

		// checks the getters and setteres VariantName, Type and Nucleotide sequence
		testdata.setNucleotideSequence("seq");
		if(testdata.getNucleotideSequence() == "seq"){
			cout << "Passed set/get nucleotide sequence" << endl;
		}
		testdata.setVariantName("name");
		if(testdata.getVariantName() == "name"){
			cout << "Passed set/get variant name" << endl;
		}
		testdata.setVariantType("type");
		if(testdata.getVariantType() == "type"){
			cout << "Passed set/get variant type" << endl;
		}

		return true;
	
	}