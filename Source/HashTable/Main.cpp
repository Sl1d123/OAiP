#include "Header.h"


struct Three {
public: int numContainer;
public :struct Three *left;
public :struct Three *right;
};

Three* th;

Three* AddNum(Three *ths, int num) {
	
	if (ths == nullptr) {
		ths = new Three();
		ths->numContainer = num;
		ths->left = nullptr;
		ths->right = nullptr;
		cout << "Write num : " << num << endl;
		return ths;
	}
	else {
		if (ths->numContainer < num) {
			ths->right = AddNum(ths->right, num);
		//	AddNum(ths->right, num);
			return ths;
		}else{
			ths->left = AddNum(ths->left, num);
			//AddNum(ths->left, num);//
			return ths;
		}
	}
}

string str[200];


void GetValue(Three* thd , int counter) {
	if (thd != nullptr) {
		counter++;
		//cout << thd->numContainer << "  ";
		str[counter] += to_string(thd->numContainer) + " ";
		//string str = to_string(thd->numContainer)+ "\n" + "  " + GetValue(thd->left) +  "  " + GetValue(thd->right) + "";
		//return str;
		GetValue(thd->left, counter);
		GetValue(thd->right, counter);
	}
	counter--;
}


void GetIntegerThree(Three* thd ,int *arr, int &i ) {
	if (thd != nullptr) {
		//int* p = &arr;
	
		arr[i] = thd->numContainer;
		i++;
		GetIntegerThree(thd->left, arr, i);
		
		GetIntegerThree(thd->right, arr, i);
	}
}

void Refresh() {
	
	int* ar = new int;

	//int kor = f/ 2;
	int counter = 0;
	GetIntegerThree(th,ar, counter);
	cout << "Text";
	cout<< "SIZE : "<< counter <<"\n";
	for(int i = 0; i < counter; i++){
		cout << ar[i] << " | "; 
	}

	delete []ar;
}


int main()
{
//R[] = { 333,326,77,45,67,56,989,65,34,879,457,43,98,75,787,34,46,24,76,999,2111,43,1,45,67 };

	th = new Three();
	th->numContainer =  0;  //корень
	th->left = nullptr;
	th->right = nullptr;

	for (int i = 1; i < 26; i++)
		AddNum(th, i);

	Refresh();


	//cout << "\n" << 
	GetValue(th,1);// << endl;

	for (int i = 0; i <50; i++)
	{
	//	cout <<str[i] << endl;
	
	}

	//MyList L1;
	int Size = 25;

	//L1.PushTable();      //Переделать
	//L1.Tree_AddNode(Size,aR);
	/*
	L1.PushTable(23, L1.GetKey(12));
	L1.PushTable(4, L1.GetKey(13));
	L1.PushTable(323,L1.GetKey(11));
	L1.PushTable(94,L1.GetKey(47));



	*/








	system("pause");
	delete th;
	delete str;
	return 0;
}
