#include "Hash.h"



MyList::MyList()  //234
{
	
	MyList *phead = nullptr;
    MyList *pNext = nullptr;
	
	//int **Node = (int**) new int [][2];


};







void MyList::PushTable(int data[234][2],int key)
{
	

	for(int i=0;i<234;i++)
	{
		if (i == key)
		{
			if (this->Node[i][1] == 0) //�������� �� �������
			{ 
				Node[i][1] = data[i][1];
				//this->Node[i][1] = data
			} 
			else 
			{
			//���������� ������� ������
			}
			
		}
	}

}

void MyList::Delete(int key,int** Data,bool conf)
{
	
	for (int i = 0; i < 10; i++)
	{
		if (Data[0][i] == key) 
		{
		//��� �� �� �����?
			if (conf) {   ;}
			else { /* ����� */ ; }
		}
	
	}

	
}


for (int i = 0; i < 10; i++)
{
	if (Data[0][i] == key)
	{
		//��� �� �� �����?
		if (conf) { ; }
		else { /* ����� */; }
	}

}


MyList::~MyList()
{
	free(Node);
};