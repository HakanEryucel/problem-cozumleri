/*****************************************
*	İKİ SAYI ÜZERİNDE TEMEL DÖRT İŞLEM
*		Author: Hakan Eryücel
*****************************************/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int tamSayi1;
	int tamSayi2;
	int toplam, fark, carpim, bolum;

	cout << "İşlem yapılacak olan ilk sayıyı giriniz\t";
	cin >> tamSayi1;
	system("cls");
	cout << "İşlem yapılacak olan ikinci sayıyı giriniz\t";
	cin >> tamSayi2;
	system("cls");

	toplam = tamSayi1 + tamSayi2;
	fark = tamSayi1 - tamSayi2;
	carpim = tamSayi1 * tamSayi2;
	bolum = tamSayi1 / tamSayi2;
	cout << "Girdiğiniz iki sayının" << endl << "Toplamı=" << toplam << endl << "Farkı=" << fark << endl << "Çarpımı=" << carpim << endl << "Bölümü=" << bolum << endl;
	system("pause");
    return 0;
}

