#include<iostream>
using namespace std;

int main()
{
    int cift_sayac=0,tek_sayac=0;
    for(int i=1;i<100;i++)
    {
       // cout<<i<<endl;
        if(i%2==0)
        {

            cout<<i<<" Sayi cift: "<<endl;
            cift_sayac++;
        }
        else
        {
            cout<<i<<"Sayi Tek: "<<endl;
            tek_sayac++;
        }
    }
    cout<<"Cift sayilarin adedi :"<<cift_sayac<<endl;
    cout<<"Tek sayilarin adedi :"<<tek_sayac<<endl;


}
