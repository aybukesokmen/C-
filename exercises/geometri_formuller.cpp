//ortalama alma for ile
#include<iostream>

using namespace std;

int main()
{
    //5 adet sayi istesin
    //for ve while d�ng�y� saglar
    float sayi;
    float toplam=0;
    int sayi_miktari=5;

    for(int i=0;i<sayi_miktari;i++)//baslang�c degeri ;ko�ul;ad�m
    {
            cout<<"Lutfen sayiyi giriniz ";cin>>sayi;
            toplam=toplam+sayi;

    }
    cout<<"toplam: "<<toplam<<endl<<"Ortalama: "<<toplam/sayi_miktari;


    return 0;




}
