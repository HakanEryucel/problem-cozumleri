/*************************************************
*	GİRİLEN SAYININ TEK Mİ ÇİFT Mİ OLDUĞUNU BULMA
*		Author: Hakan Eryücel
**************************************************/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int tamSayi1;
	cout << "Tek mi çift mi olduğunu öğrenmek istediğiniz sayıyı giriniz\t";
	cin >> tamSayi1;
	system("cls");
	if (tamSayi1 % 2 == 0)
		cout << "Girdiğiniz sayı bir çift sayıdır.\n";
	else
		cout << "Girdiğiniz sayı bir tek sayıdır.\n";
	
	system("pause");
    return 0;
}

