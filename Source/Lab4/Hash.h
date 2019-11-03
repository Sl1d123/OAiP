#pragma once

#include <iostream>
#include <string>
//#include <List>


using namespace std;


//template<typename T>   //Шаблон для различных типов(T)
class Lost
{
public:

	Lost(string F);

	void Pushback(int data);			 //Метод для пуша данных в таблицу
	void Delete(int key);
	void PopFront();
	int GenerateKey(int key);
	void Menu();						 //Метод для выбора действий над таблицей(поиск,удаление)
	int GetSize() { return M_size; };    //Метод для пуша данных в таблицу
	void SetSize(int M) { M_size = M; };   //Метод для пуша данных в таблицу
	//void & operator[](const int index);  //Метод для пуша данных в таблицу
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




