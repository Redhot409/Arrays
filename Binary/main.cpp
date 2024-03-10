//Binary
#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int decimal;//десятичное число
	cout << "Input decimal number: "; cin >> decimal;
	const int n = 32; // 32 - потому что int содержит 4 байта., т.е. 4х8 бит (32 бит= 32 разряда=32 элемента (0 или 1))
	bool bin[n] = {};//Этот массив будет хранить разряды двоичного числа
#ifdef VAR_1
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2; // Получаем младший разряд двоичного числа
		i++;// Переходим к следующему разряду
		decimal /= 2;// Убираем младший двоичный разряд из числа
	}
#endif // VAR_1

	int i = 0;
	//while (decimal >0 )
	// {
	//	bin[i]=decimal%2 определение первого (младшего) разряда двоичного числа
	//  i++;
	//	decimal /=2; убираем младший разряд из двоичного числа decimal
	// }
	// for (int i=n-1; i>=0;i--) // --i - это то же самое, что i = n-1
	// {
	//	cout<<bin[i] 
	// }
	//(start;stop;step);каждое из этих выражений необязательно и его можно оставить пустым
	//for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (; decimal; bin[i++] = decimal & 1, decimal >>= 1);// decimal % 2 эквивалентно decimal & 1 (побитовое умножение на 1  )
	//decimal >>1 эквивалентно выражению деления на 2: (decimal /=2) скорость выше у decimal>>1 
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