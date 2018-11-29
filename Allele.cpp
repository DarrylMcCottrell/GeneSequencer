 #include <iostream>
 #include <Allele.h>
 #include <fstream>

	using namespace std;

	

	void Allele::WriteAlleleToFile(ofstream& of){
			of.open("testData.txt");
			of << "variantName" << "," << "variantType" << "," << "nucleotideSequence" << "\n";
			of.close();
	};
	bool Allele::RunUnitTest(){};

	Allele::Allele(string NS,string VN,string VT){
		setNucleotideSequence(NS);
		setVariantName(NS);
		setVariantType(VT);	
		
	}

	