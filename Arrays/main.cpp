//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;

	float equal;
	float sum = 0;
	const int SIZE = 5;
	int arr[SIZE];
	//cout << int() << endl;

	//���� ��������� ������� � ����������

	cout<< "������� �������� ��������� ������� :"<<endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	 }

	//����� ��������� ������� �� �����
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ��������� ������� �� ����� � �������� �������
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//���������� ����� ��������� ������� � ������-�������������� �������� ��������� �������
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
		equal = sum / SIZE;
	}
	cout <<"Array element amount is " <<sum<< endl;
	cout <<"Equal element value is " <<equal<< endl;

	
	

}