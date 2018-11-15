#include <iostream>
#include <Allele.h>

	using namespace std;

	class Gene{
		private:
		string name,traitType;
		string AlleleA,AlleleB;

		public:
		Gene();
		Gene(Allele,Allele);

		void setName();
		void setTraitType();
		void setAlleleA();
		void setAlleleB();
		void getName();
		void getTraitType();
		void getAlleleA();
		void getAlleleB();

		void writeToFile(ostream& os);
		Allele GetExpressedTrait();

		bool RunUnitTest();

	};

	