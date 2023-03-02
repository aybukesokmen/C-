//Switch case kullanýmý
#include<iostream>

using namespace std;
int main()
{
    cout<<"********HESAP MAKINEME HOSGELDINIZ********"<<endl;
    float sayi1,sayi2,sayi3,sonuc,sonuc2;
    char islem,islem2,islem3;
    donguyu_baslat:
    cout<<"Yapmak istediginiz islemi giriniz:"<<endl;
    cin>>sayi1>>islem>>sayi2>>islem3>>sayi3;

     switch(islem)
    {
    case '+':
        sonuc=sayi1+sayi2;
       // cout<<"="<<sonuc<<endl;
        break;
    case '-':
        sonuc=sayi1-sayi2;
        //cout<<"="<<sonuc<<endl;
        break;
    case '/':
        sonuc=sayi1/sayi2;
       // cout<<"="<<sonuc<<endl;
        break;
    default:

        cout<<"Boyle bir islem tanimli degil"<<endl;
    }

    if(islem3=='+')
    {
        sonuc2=sonuc+sayi3;
    }
    else if(islem3=='-')
    {
        sonuc2=sonuc-sayi3;
    }
    else if(islem3=='/')
    {
        sonuc2=sonuc/sayi3;
    }

    cout<<"="<<sonuc2<<endl;
    yanlis_tuslama:
    cout<<"Yeni bir islem yapmak istiyor musunuz?(Evet='E'/Hayir='H')"<<endl;
    cin>>islem2;
    if(islem2=='E')
    {
        goto donguyu_baslat;
    }
    else if(islem2=='H')
    {
        cout<<"**** :) Beni tercih ettigin icin tesekkurler :)******";
    }
    else
    {
        cout<<"Yanlis tuslama yaptiniz lutfen birdaha giriniz"<<endl;
        goto yanlis_tuslama;

    }




    return 0;




}
