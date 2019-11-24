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

		void PushTable();	     //Метод для пуша данных в таблицу
		//T& operator[](const int key);                //Поиск Node
		void Insert(int Data[25], int GenKey);               //Замена
		void popFront();                             //Удалить 1 эл
		void MClear();
		void Delete(const int key);                  //Удалить выбранный по ключу

		int GetKeyBuild(int num) { int Gkey = (num % (M * 10));  return Gkey; };  //Получаем ключ и передаем его List
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

	
		class Node //Ячейка
		{
		public:
			//Поля для ячейки 
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
				int* Tree_Root = nullptr; //Корень
			public:
				Mytree()
				{


				}
				~Mytree()
				{

				}

			};

			Mytree* Tree;                   //Об-т Mytree

		};

		int size;
		Node* Head;  //Об-т

	};






