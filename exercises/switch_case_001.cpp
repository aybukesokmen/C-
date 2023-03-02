//hesap makinesi programý
#include<iostream>
using namespace std;
int main()
{
    int sayi1,sayi2;
    char islem;

    cout<<"1.sayiyi giriniz: ";
    cin>>sayi1;
    cout<<"2.sayiyi giriniz: ";
    cin>>sayi2;

    cout<<"Islem giriniz:";
    cin>>islem;
    switch(islem)
    {
    case '+':
        cout<<"toplama: "<<sayi1+sayi2;
        break;
    case '-':
        cout<<"Cikarma: "<<sayi1-sayi2;
        if(sayi1>sayi2)
        {
            cout<<sayi1-sayi2;
        }
        else if(sayi2>sayi1)
        {
            cout<<sayi2-sayi1;
        }
        break;
    default:
        cout<<"YANLIS TUSLAMA YAPTINIZ.";
        break;


    }
}
