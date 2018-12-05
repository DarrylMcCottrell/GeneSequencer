#pragma once
#include <iostream>


	using namespace std;

	// setting my class Allele and it's public and private functions below
	class Allele{
		private:
		string nucleotideSequence;
		string variantName;				
		string variantType;
						
		public:
		Allele();
		Allele(string seq,string name,string type);
		
		// Basically setting all of my needed functions in my h file so the data can then be pulled from my cpp file
		void WriteAlleleToFile(ofstream& of);
		void setNucleotideSequence(string givenSequence);
		void setVariantName(string givenVariantName);
		void setVariantType(string givenVariantType);
		string getNucleotideSequence();
		string getVariantName();
		string getVariantType(); 
		bool operator==(Allele giggity);
		bool RunUnitTest();
		
		
	};