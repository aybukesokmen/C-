#include<iostream>

using namespace std;

int main()
{
    string kullanici_adi,sifre,klavye_kullanici_Ad,klavye_sifre;
    bool sifre_kontrol,kullanici_ad_kontrol;
    int islem,kullanici_sayisi=2;

    cout<<"Kullanici adini giriniz:";cin>>klavye_kullanici_Ad;
    cout<<"Sifre  giriniz:";cin>>klavye_sifre;
    islem=1;
    if(kullanici_ad_kontrol==false)
    {
        islem++;
        if(islem==kullanici_sayisi+1)
        {
            kullanici_ad_kontrol=false;
        }
    }

    switch(islem)
    {
    case 1:
        kullanici_adi="aybuke";
        sifre="1234";
        if(kullanici_adi==klavye_kullanici_Ad)
        {
            kullanici_ad_kontrol=true;
            if(sifre==klavye_sifre)
            {
                sifre_kontrol=true;
            }
            else
            {
                sifre_kontrol=false;
            }
        }
        else
        {
            kullanici_ad_kontrol=false;
        }
        break;
    case 2:
        kullanici_adi="ali";
        sifre="1234";
        if(kullanici_adi==klavye_kullanici_Ad)
        {
            kullanici_ad_kontrol=true;
            if(sifre==klavye_sifre)
            {
                sifre_kontrol=true;
            }
            else
            {
                sifre_kontrol=false;
            }
        }
        else
        {
            kullanici_ad_kontrol=false;
        }

    }

    if(kullanici_ad_kontrol==false)
    {
        cout<<"FALSE";
    }
    else
    {
        cout<<"True";
        if(sifre_kontrol==true)
        {
            cout<<"Basarili giris.";
        }
        else
        {
            cout<<"Giris yapilamadi.";
        }
    }



}
;
