#include "stdafx.h"
#include<iostream>
using namespace std;
class deneme {
public:
	deneme();//parametresiz yapýcý fonksiyon
	deneme(int);
	deneme(int, int);

};
deneme::deneme() {
	cout << "Parametresiz Yapici Fonksiyon Calisti!" << endl;

}
deneme::deneme(int x)
{
	cout << "Tek Parametreli Yapici Fonksiyon Cagirildi!" << endl;
}
deneme::deneme(int x, int y)
{
	cout << "Iki Parametreli Yapici Fonksiyon Cagirildi!" << endl;
}
int main()
{
	deneme d;
	deneme d1(4);
	deneme d2(6, 1);
	system("PAUSE");
    return 0;
}
