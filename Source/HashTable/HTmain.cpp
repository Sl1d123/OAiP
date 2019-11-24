#pragma once



#include "Header.h"
/*

	void MyList::Tree_ShowTree()
	{


	}

	void MyList::MClear()
	{


		while (size)
		{
			this->popFront();
		}
	}


	void MyList::ShowTable()
	{
		Node* cy = Head;

		//	cout << "\n hh" << Key;
		while (cy != nullptr)
		{
			///cout << "\n Key is" << cy->Key;

			cout << "\n" << "_____________";
			cout << "\n" << cy->Data;

			cy = cy->pNext;
		}
	}




	void MyList::popFront()
	{
		Node* cym = Head;

		Head = Head->pNext;

		delete cym;
		size--;
	}


	void MyList::PushTable()
	{
		if (Head == nullptr)             //Nothing inside (1 заход)
		{
			Head = new Node();      //Выделяем память под об-т
		}
		else
		{
			Node* cur = this->Head;

			while (cur->pNext != nullptr) //Реализация некст поинтера()
			{
				cur = cur->pNext;

			}

			cur->pNext = new Node();

		}
		size++;
	}


	void MyList::Insert(int Data[25], int GenKey)
	{
		Node* cy = this->Head;

		//	cout << "\n hh" << Key;

		while (cy != nullptr)
		{
			///cout << "\n Key is" << cy->Key;
			if (GenKey == cy->Key_Prod)
			{

				cy->Data = Data;
				break;

			}
			cy = cy->pNext;
		}
	}



	void MyList::Delete(const int Key)
	{
		Node* cy = this->Head;

		while (cy != nullptr)
		{
			///cout << "\n Key is" << cy->Key;
			if (Key == Head->Key)
			{
				size--;
				delete cy;
				break;

			}
			cy = cy->pNext;
		}

	}

	/*
	T& MyList::operator[](const int key)
	{
		Node<T>* cur = this->Head;

		//cout <<"\n hh"<< ->Key;
		while (cur != nullptr)
		{
			if (cur->Key == key)
			{
				return cur->Data;
			}
			cur = cur->pNext;
		}


	}
*/	
	MyList::MyList()
	{
		size = 0;
		Head = nullptr;
		Head->Tree = nullptr;

	}

	MyList::~MyList()
	{

		//MClear();
	}



	void MyList::Tree_AddNode(int sizeData, int Data[25])  //n=25
	{

		int size = sizeData;

		if (Head->Tree->Tree_Root == nullptr)   //если корня нет
		{
			Head->Tree->Tree_Root = new int(1);      //Выделяем память п
			*(Head->Tree->Tree_Root) = (size/2);                     //Корень создан
		}
		Head->Tree->Tree_LeftIndex[1][2] = 3;
		Head->Tree->Tree_RightIndex[2][2] = 3;



//		Tree_AddNode(size, Data);


	}







