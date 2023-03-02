//DONGULER
#include<iostream>

using namespace std;

int main()
{
    int ogrenci_Sayisi,ogrenci_notu;
    int islem_yap=0;

    cout<<"Sinifinizdaki ogrenci sayisini giriniz:";cin>>ogrenci_Sayisi;

    for(int i=0;i<ogrenci_Sayisi;i++)
    {
        cout<<i+1<<".notu giriniz:";cin>>ogrenci_notu;
        islem_yap=islem_yap+ogrenci_notu;
    }
    cout<<"Sinifin not ortalamasi= "<<islem_yap/ogrenci_Sayisi;


}
