#pragma once

#include <stack>
#include <string>
#include <malloc.h>

using namespace std;

//typedef int Tkey;

struct Tinf
{
	//string inf;
	//Tkey key;
	int key;

};

struct TSel
{
	const int M = 10;
	const int R = 20;
	

	
	floaqqqqqqt** A = malloc(R * sizeof(float*));
	for (int i = 0; i < R; i++)
	{
		A[i] = (float*)malloc(C * sizeof(float*));

	}
	
	TSel ** A = malloc(M*sizeof(TSel*));

	for (int i = 0; i < R; i++)
	{
		A[i] = (Tsel*)malloc(R * sizeof(TSel*));

	}


	Tinf inf;
	//TSel*A;

};



class Hesh
{
public:

	Hesh(int,char*) {};

	bool Read(Tinf Key,Tinf*);
	void Add(Tinf);
	void Delete(Tinf Key);
	void Menu();
	~Hesh() {};


private:
	TSel** H;
	char* Filename;
	int i;


};

