/**********************************************
*	DİKDÖRTGENİN ÇEVRESİNİ VE ALANINI HESAPLAMA
*		Author: Hakan Eryücel
***********************************************/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int uzunKenar, kisaKenar, cevre, alan;

	cout << "Çevresini ve alanını hesaplamak istediğiniz dikdörtgenin sırasıyla kısa ve uzun kenar uzunluğunu giriniz\t";
	cin >> kisaKenar >> uzunKenar;
	system("cls");
	cevre = 2 * (kisaKenar + uzunKenar);
	alan = kisaKenar * uzunKenar;
	cout << "Dikdörtgenin çevresi =" << cevre << endl << "Dikdörtgenin alanı =" << alan << endl;

	system("pause");
    return 0;
}

