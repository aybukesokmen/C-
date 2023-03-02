//Hacim hesabı
#include<iostream>
#include<math.h>
using namespace std;

int taban1,taban2,yukseklik;
string secim;
int hacim;
void dikdortgen()
{
    cout<<"Taban1 'i giriniz:"<<endl;
    cin>>taban1;
     cout<<"Taban2 'yi giriniz:"<<endl;
     cin>>taban2;
      cout<<"Yuksekligi  giriniz:"<<endl;
      cin>>yukseklik;

      hacim=taban1*taban2*yukseklik;

      cout<<"Hacim ="<<hacim;
}

void kup()
{
    cout<<"Tabanı giriniz:"<<endl;
    cin>>taban1;

    hacim=pow(taban1,3);

     cout<<"Hacim ="<<hacim;

}

int main()
{

    cout<<"Lütfen prizma tipini seciniz:(dikdortgen,kare) ";cin>>secim;

    if(secim=="dikdortgen")
    {
        dikdortgen();
    }
    else if(secim=="kare")
    {
        kup();
    }
    else
    {
        cout<<"HATALI GIRIS";
    }



}
