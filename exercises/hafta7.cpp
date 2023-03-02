#include<iostream>


using namespace std;
int main ()
{
    int kullanici_ad_dizi_uzunluk=2,sifre_uzunluk=2;
    string kullanici_ad[kullanici_ad_dizi_uzunluk]{"aybuke","arda"};
    string sifre[sifre_uzunluk]{"123a","1a22"};
    string sifre_veri_set[5]{"123a","1234","1a22","asyfs","vbgd"};
    string gl_kullanici_ad;

    cout<<"Sifresi kirilacak kullanici adini giriniz."<<endl;cin>>gl_kullanici_ad;


    for(int i=0;i<kullanici_ad_dizi_uzunluk;i++)
    {
        if(gl_kullanici_ad==kullanici_ad[i])
        {
            for(int j=0;j<5;j++)
            {
                if(sifre[i]==sifre_veri_set[j])
                {
                    cout<<gl_kullanici_ad<<" Sifreniz:"<<sifre_veri_set[j];

                }
            }

        }


    }
    return 0;

}




















