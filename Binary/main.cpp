//Binary
#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int decimal;//���������� �����
	cout << "Input decimal number: "; cin >> decimal;
	const int n = 32; // 32 - ������ ��� int �������� 4 �����., �.�. 4�8 ��� (32 ���= 32 �������=32 �������� (0 ��� 1))
	bool bin[n] = {};//���� ������ ����� ������� ������� ��������� �����
#ifdef VAR_1
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2; // �������� ������� ������ ��������� �����
		i++;// ��������� � ���������� �������
		decimal /= 2;// ������� ������� �������� ������ �� �����
	}
#endif // VAR_1

	int i = 0;
	//while (decimal >0 )
	// {
	//	bin[i]=decimal%2 ����������� ������� (��������) ������� ��������� �����
	//  i++;
	//	decimal /=2; ������� ������� ������ �� ��������� ����� decimal
	// }
	// for (int i=n-1; i>=0;i--) // --i - ��� �� �� �����, ��� i = n-1
	// {
	//	cout<<bin[i] 
	// }
	//(start;stop;step);������ �� ���� ��������� ������������� � ��� ����� �������� ������
	//for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (; decimal; bin[i++] = decimal & 1, decimal >>= 1);// decimal % 2 ������������ decimal & 1 (��������� ��������� �� 1  )
	//decimal >>1 ������������ ��������� ������� �� 2: (decimal /=2) �������� ���� � decimal>>1 
	for (--i; i >=0; i--)
	{
		cout << bin[i];
		/*if (i % 8==0)cout << " ";
		if (i % 4==0)cout << " ";*/

		if ((i & 7)==0)cout << " ";
		if ((i & 3)==0)cout << " ";
	}
	cout << endl;



}