#include "GG.h"



int main()
{

	//Hesh T(10, ".txt");

	Hesh *H1;
	H1 = new Hesh(10,".txt");
	
	for (int i=1; i< N; i++)
	{
		//input inf

		H1->Add(inf);
		
		//input key

		bool bl = H1->Read(Tkey, inf);

		//input key

		H1->Delete(key);

		H1->~Hash();


	}

}