/*****************************************
*	GİRİLEN İKİ SAYIYI KARŞILAŞTIRMA
*		Author: Hakan Eryücel
*****************************************/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int sayi1, sayi2;

	cout << "Karşılaştırmak istediğiniz sayıları sırasıyla giriniz\t";
	cin >> sayi1 >> sayi2;
	system("cls");
	
	if (sayi1 > sayi2)
		cout << "İlk girdiğiniz sayı ikinci girdiğiniz sayıdan büyüktür.\n";
	else if (sayi2 > sayi1)
		cout << "İkinci girdiğiniz sayı ilk girdiğiniz sayıdan büyüktür.\n";
	else
		cout << "Girdiğiniz iki sayı birbirine eşittir.\n";

	system("pause");
	return 0;
}