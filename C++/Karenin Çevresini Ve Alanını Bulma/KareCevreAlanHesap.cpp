/******************************************
*	KARENİN ÇEVRESİNİ VE ALANINI HESAPLAMA
*		Author: Hakan Eryücel
******************************************/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int kenar, cevre, alan;

	cout << "Hesaplamak istediğiniz karenin bir kenar uzunluğunu giriniz\t";
	cin >> kenar;
	cevre = kenar * 4;
	alan = kenar * kenar;
	system("cls");
	cout << "Karenin çevre uzunluğu =" << cevre << endl << "Karenin alanı =" << alan << endl;

	system("pause");
	return 0;
}

