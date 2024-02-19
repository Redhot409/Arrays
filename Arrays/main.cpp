//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;


	int sum = 0;
	const int SIZE = 5;
	int arr[SIZE];
	//cout << int() << endl;

	//Ввод элементов массива с клавиатуры

	cout << "Введите значения элементов массива :" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	//Вывод элементов массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод элементов массива на экран в обратном порядке
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вычисление суммы элементов массива и средне-арифметической величины элементов массива
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Array element amount is " << sum << endl;
	cout << "Equal element value is " << (double)sum / SIZE << endl;

	// Поиск минимального и максимального значения элементов массива
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Min value: " << min << endl;
	cout << "Max value: " << max << endl;
	

}