//Shift
#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	int a;// временная переменная под нулевой элемент массива при циклическом сдвиге
	int x;// число элементов сдвига
	const int SIZE = 10;
	int arr[SIZE] = {0,1,1,2,3,5,8,13,21,34};
	cout << "Input shift value: "; cin >> x;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	
	for (int i = 1; i<=x; i++)
	{
		a = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE-1] = a;
	}
	for (int i = 0; i < SIZE; i++)
	{
	cout << arr[i] << "\t";
	}
	cout << endl;
	











}
