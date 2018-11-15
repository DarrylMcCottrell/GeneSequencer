#include <iostream>
    
	using namespace std;

	class Allele{
		private:
		string nucleotideSequence;
		string variantName;
		string variantType;

		public:
		Allele();
		Allele(string,string,string);

		void writeToFile(ofstream& of);
		void setNucleotideSequence();
		void setVariantName();
		void setVariantType();
		void getNucleotideSequence();
		void getVariantName();
		void getVariantType();

		bool RunUnitTest();
		
	};