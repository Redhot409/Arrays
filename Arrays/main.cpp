//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;

	int i;
	const int SIZE = 5;
	int arr[SIZE];
	//cout << int() << endl;

	//¬вод элементов с клавиатуры

	cout<< "¬вести значени€ элементов массива с клавиатуры :"<<"\n";
	for(int i = 0; i<SIZE; i++)
	{ 
		cin>>arr[i];
	}
	//вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{

		cout << arr[i] << "\t";

	}
	cout << endl;


}