#include <iostream>
using namespace std;
int usttaban,alttaban,yukseklik,alan,numara;
bool yanlis_secim=0;
int yamuk(int alttaban,int usttaban,int yukseklik)
{
    int yamuk_alan;

    yamuk_alan = ((usttaban +alttaban)*yukseklik)/2;
    return yamuk_alan; //yamugun alani fonksiyonun değeri oluyor

}
int dikdortgen(int kenar1,int kenar2)
{
    int dikdortgen_alan;
    dikdortgen_alan = kenar1*kenar2;
    return dikdortgen_alan;
}
int paralel_kenar(int alttaban,int yukseklik)
{
    int paralel_kenar_alan;
    paralel_kenar_alan =alttaban*yukseklik;
    cout <<"alan: "<<alan;
    return paralel_kenar_alan;
}

void alan_hesaplari()
{
    cout<<"Asagidaki dortgenlerden hangisinin alanını hesaplamak istersiniz?(numara giriniz)"<<endl<<"1 yamuk"<<endl<<"2 dikdortgen"<<endl<<"3 paralelkenar"<<endl;cin >> numara;

    if(numara<4)
    {
        yanlis_secim=0;
    }
    switch(numara)
    {
    case 1:
        cout <<"alt tabani giriniz: ";cin>>alttaban;
        cout <<"ust tabani giriniz: ";cin>>usttaban;
        cout <<"yuksekligi giriniz: ";cin>>yukseklik;
        cout<<"ALAN="<<yamuk(alttaban,usttaban,yukseklik)<<endl;
        break;//döngüyü kırdı
    case 2:
        cout <<"bir kenarı giriniz: ";cin>>alttaban;
        cout <<"diger kenari giriniz: ";cin>>yukseklik;
        cout<<"ALAN="<<dikdortgen(alttaban,yukseklik);
        break;
    case 3:
        cout <<"tabanı giriniz: ";cin>>alttaban;
        cout <<"tabana ait yuksekligi giriniz: ";cin>>yukseklik;
        cout<<"ALAN="<<paralel_kenar(alttaban,yukseklik);
    default:
        cout <<"yeniden deneyiniz: "<<endl;
        yanlis_secim=1;
    }

}
int main()
{
 alan_hesaplari();
 while(yanlis_secim==1)
 {
     alan_hesaplari();
 }
     cout <<endl<<"bay bay";

}












