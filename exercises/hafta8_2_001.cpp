
#include<iostream>
using namespace std;


const double pi=3.14;
int daire_cevresi(double yaricap)//2pir
{
    return 2*pi*yaricap;
}


int return_fonksiyonu(double a)//2pir
{
    return a;
}

int daire_alani(double yaricap)//pi*r^2
{
    return pi*yaricap*yaricap;
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int klavye_r;
    cout<<"YARICAP:" ;cin>>klavye_r;
    cout<<endl<<"Daire cevresi fonksiyonunda dondurulen deger :"<<daire_cevresi(klavye_r);
    cout<<endl<<"Daire alani fonksiyonunda dondurulen deger :"<<daire_alani(klavye_r)<<endl;

    cout<<return_fonksiyonu(5);




}
