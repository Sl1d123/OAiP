#include "Hash.h"


//template<typename T>
Lost::Lost(string F)
{
	file = F;
	head = nullptr;

};

//template<typename T>
void Lost::Menu()
{
	int choose=0;
	cout << "Выберите действие";
	cout << "\n 1 - поиск, 2 - добавление ,3 - удаление";
	cin >> choose;

	switch (choose)
	{
	case 1: break;
	case 2: break;
	case 3: break;
	default:
		break;
	}

}

//template<typename T>
 int Lost::GenerateKey(int key)
{
	int Key = 0;
	Key %= 10;

	return Key;
}



//template<typename T>
void Lost::Pushback(int data)
{
	if (head == nullptr)
	{
		//head = new Node<T>(data);
	}
	else
	{
		//Node<T>* current = this->head;

		/*while ( current->pNext != nullptr)
		{
			current = current->pNext;
		}*/
		//current->pNext = new Node<T>(data);  //Создание ноды новой

	}
	this->SetSize(5);
}


//template<typename T>
void Lost::PopFront()
{
	//Node<T> *temp = head;
	head=head->pNext;
	//delete temp;
	M_size--;


}

//template<typename T>
void Lost::Delete(int  key)
{

	
}


//template<typename T>
//int & Lost::operator[](const int index)
//{
//	int counter = 0;
////	Node<T>* current = this->head;
//
//		//while (current != nullptr) //Проверка на наличие данных
//		//{
//		//	if (counter == index) { return current->data; } //Нашли 
//		//
//		//	current = current->pNext;
//		//	counter++;
//		//}
//		
//}


//template<typename T>
Lost::~Lost()
{
	//free(Node);
};