#include "Hash.h"


void WriteAr(int arrh [234][2])
{
	int n=100;
	int l=0;
	int c = 100;
	for (int i = 0; i < 234; i++)
	{
		if (l == 26) {  n = c+n; l = 0; }
	

		 arrh[i][1] = l + n;
		 l++;
			
	}

	int k = 1;
	for (int i = 0; i < 234;i++)
	{
		
		if (i == 10 * k) { k++; cout << " \n"; }
		cout << " "<< arrh[i][1] <<" ";
	}
}


int main()
{
		
	setlocale(LC_ALL,"ru");	
	char d;
	string c;
	int arr[234][2];
	int choose=0;
	string a_ = {"__________"};
	
	string path = "filet.txt";
	
	WriteAr(arr);

	MyList l();
	
	ifstream fileIn;


	//fileIn.open(path);

	//if (!fileIn.is_open())
	//{
	//	cout << "Error " << " *" << path << "* " << " File is not open \n";
	//}
	//else
	//{
	//	cout << " File" << " *"<< path << "* "<< "opened sucsessful \n";
	//	
	//	while (fileIn.get(d)) 
	//	{
	//		c =c + d;
	//	}
	//	//cout << c  ;
	//}

	


	/*cout << "\n ¬ыберите действие \n";
	cout << a_ << "\n поиск 1 \n" << a_
		 << "\n добавить 2 \n" << a_
		 << "\n удалить 3 \n" << a_ << "\n";

	cin >> choose;

	switch (choose)
	{
	case 0: break;

	case 1: break;

	case 2: break;
	default:
		break;
	}
*/

	fileIn.close();





	//Lost<int>("ru"); //List generate ;
	
	

//	list.Pushback(200);
//	list.Pushback(210);
//	cout << list[7] << endl;
//	
//	list.PopFront();
//	
	return 0;
}