#pragma once
#include <iostream>
#include "Allele.h"
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

		void setName(string givenName);
		void setTraitType(string givenTrait);
		void setAlleleA(Allele givenAlleleA);
		void setAlleleB(Allele givenAlleleB);
		string getName();
		string getTraitType();
		Allele getAlleleA();
		Allele getAlleleB();
     
		void WriteToFile(ofstream& of);
		Allele GetExpressedTrait();

		bool RunUnitTest();

	};

	