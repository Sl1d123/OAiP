#pragma once

#include <iostream>
#include <string>
//#include <List>


using namespace std;


//template<typename T>   //������ ��� ��������� �����(T)
class Lost
{
public:

	Lost(string F);

	void Pushback(int data);			 //����� ��� ���� ������ � �������
	void Delete(int key);
	void PopFront();
	int GenerateKey(int key);
	void Menu();						 //����� ��� ������ �������� ��� ��������(�����,��������)
	int GetSize() { return M_size; };    //����� ��� ���� ������ � �������
	void SetSize(int M) { M_size = M; };   //����� ��� ���� ������ � �������
	//void & operator[](const int index);  //����� ��� ���� ������ � �������
	~Lost();

public:
	
	string file;

private:

//	template<typename T>
	class Node
	{
	public:

		Node* pNext;
		int data;

		Node(int dataT(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}

		~Node()
		{

		}

	};

	int M_size;

	 Node* head;
};




