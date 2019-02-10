/*******************************************************
*	BİR ÜÇGENDE PİSAGOR TEOREMİ İLE HİPOTENÜS HESAPLAMA
*		Author: Hakan Eryücel
*******************************************************/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");

	double dikKenar1, dikKenar2, hipotenus;

	cout << "Hipotenüsünü hesaplamak istediğiniz dik üçgenin dik kenarlarının uzunluklarını giriniz\t";
	cin >> dikKenar1 >> dikKenar2;
	system("cls");
	hipotenus = sqrt(dikKenar1*dikKenar1 + dikKenar2 * dikKenar2);
	cout << "Dik kenarlarını girdiğiniz üçgenin hipotenüs uzunluğu = " << hipotenus << endl;


	system("pause");
	return 0;
}

