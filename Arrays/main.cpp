//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;

	int i;
	const int SIZE = 5;
	int arr[SIZE] = {3,5,8};
	cout << int() << endl;

	//¬вод элементов с клавиатуры

	for(int i =0; i<SIZE; i++)
	{ 
		cout<< "¬вести значени€ элементов массива с клавиатуры :";
		cin>> i;
	}


	//вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{

		cout << arr[i] << "\t";

	}
	cout << endl;


}