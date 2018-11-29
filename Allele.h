#include <iostream>
#include <fstream>
	using namespace std;

	class Allele{
		private:
		string nucleotideSequence;
		string variantName;
		string variantType;

		public:
		Allele();
		Allele(string,string,string);

		void WriteAlleleToFile(ofstream& of);
		
		void setNucleotideSequence(string givenSequence){
			nucleotideSequence = givenSequence;
		}
		void setVariantName(string givenVariantName){
			variantName = givenVariantName;
		}
		void setVariantType(string givenVariantType){
			variantType = givenVariantType;
		}
		string getNucleotideSequence(){
			return nucleotideSequence;
		}
		string getVariantName(){
			return variantName;
		}
		string getVariantType(){
			return variantType;
		}

		bool RunUnitTest();
		
		
	};