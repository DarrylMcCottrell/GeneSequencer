#include <iostream>
#include <Allele.h>
#include <fstream>

	using namespace std;

	class Gene{
		private:
		string name;
		string traitType;
		Allele AlleleA;
		Allele AlleleB;

		public:
		Gene();
		Gene(Allele,Allele);

		void setName(string givenName){
			name = givenName;
		}
		void setTraitType(string givenTrait){
			traitType = givenTrait;
		}
		void setAlleleA(Allele givenAlleleA){
			AlleleA = givenAlleleA;
		}
		void setAlleleB(Allele givenAlleleB){
			AlleleB = givenAlleleB;
		}
		string getName(){
			return name;
		}
		string getTraitType(){
			return traitType;
		}
		Allele getAlleleA(){
			return AlleleA;
		}
		Allele getAlleleB(){
			return AlleleB;
		}

		void WriteToFile(ofstream& of);
		Allele GetExpressedTrait();

		bool RunUnitTest();

	};

	