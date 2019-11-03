#include "GG.h"

Hesh::Hesh(int k,char *FN) //Принимаем ссылку на .txt 
{
	//ReadFile
	Filename = FN;
	M = k;
	H = new TSel * [M];

	for (int i = 0; i < M; i++)
	{
		H[i] = 0;
	}


}
Hesh::Menu() 
{


}

Hash::Hesh(int k, char* FN) //Принимаем ссылку на .txt 
{
void Hesh::Add(Tinf inf) 
{
	TSel* p = new TSel;
	i = inf.key % M;
	p->A = H[i];
	p->inf = inf;
	H[i] = p;

}

void Hesh::Delete(Tkey key) 
{
	i = key % M;
	TSel* p = H[i], *p1;
	if (p == 0) { return; }
	if (p->inf.key == key)
	{
		H[i] = p->A;
		delete p;
	}
	
	else 
	{
		p1 = p->A;
		while (p1 != 0) 
		{
			if (p1->inf.key = key)
			{
				p->A = p1->A;
				delete p1;

				return;
			}
		
			p = p1;
			p1 = p1->A;
		}
	}

}

bool Hesh::Read(Tkey key, Tinf *inf) 
{
	i = key % M;
	TSel* p = H[i],*p1;
	bool bl = false;

	if (p != 0) 
	{
		do
		{
			bl = (p->inf.key == key);
				p1 = p;
			p = p->A;
		} 
		while ((!bl) && (p != 0));
		if (bl)* inf = p1->inf;
	}
	return bl;

}

Hesh::~Hesh() 
{
	TSel* p;
	FILE* F1;

	if ((F1 = fopen(Filename, "wb")) == 0) 
	{
		cout << "File no created" ;
		return;
	}
	
	for (int i = 0; i < M; i++)
	{
	
		while (H[i] != 0) 
		{
			p = H[i];
			fwrite(&H[i], sizeof(TSel), 1, F1);
			H[i] = H[i]->A;
			delete p;
		}
	}

	fclose(F1);
	
	free(A);


	delete H;
}