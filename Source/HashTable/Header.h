#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

	
	class MyList
	{
	public:


		MyList();
		~MyList();

		void PushTable();	     //����� ��� ���� ������ � �������
		//T& operator[](const int key);                //����� Node
		void Insert(int Data[25], int GenKey);               //������
		void popFront();                             //������� 1 ��
		void MClear();
		void Delete(const int key);                  //������� ��������� �� �����

		int GetKeyBuild(int num) { int Gkey = (num % (M * 10));  return Gkey; };  //�������� ���� � �������� ��� List
		int GetKeyProd(int num) { int Gkey = (num % M);  return Gkey; };
		int GetSize() { return size; };

		void ShowTable();
		string file;
		const int M = 10;

	public:

		void Tree_ShowTree();
		void Tree_AddNode(int sizeData, int Data[25]);


	private:
		//int* arr_Def = new int[25];
		//////////// NODE ///////////////////

	
		class Node //������
		{
		public:
			//���� ��� ������ 
			Node* pTree;              //Data 
			int  Key_shop;
			Node* pNext;
			int Data[25];
			int * Key_Prod;

			Node(
				int Data[25] = int(), int GenKey = int(), Node* pNext = nullptr, 
				Node* pPrev = nullptr,
				Node* pTree = nullptr
			)
			{
				this->Data[25] = Data[25];
				this->pNext = pNext;
				this->Key_shop = GenKey;
				
			}

			Node() {

			}

			~Node()
			{
			}

			
			class Mytree
			{
			public:
				int NProduction;
				int** Tree_LeftIndex = nullptr,
					** Tree_RightIndex = nullptr;
				int* Tree_Root = nullptr; //������
			public:
				Mytree()
				{


				}
				~Mytree()
				{

				}

			};

			Mytree* Tree;                   //��-� Mytree

		};

		int size;
		Node* Head;  //��-�

	};






