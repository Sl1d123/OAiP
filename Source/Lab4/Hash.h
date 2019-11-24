#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class MyList
{
public:

	MyList();

	void PushTable(int data[234][2],int key);			 //����� ��� ���� ������ � �������
	void Delete(int key, int** Data,bool conf);
	
	int GetKey(int num) {  key = num % M;   return key; }
	int GetSize() { return M_size; };    //����� ��� ���� ������ � �������
	void SetSize(int M) { M_size = M; };   //����� ��� ���� ������ � �������
	~MyList();

public:
	
	string file;
	const int M = 10;
private:

	int M_size;
	int key;
	int **Node;
	
};




