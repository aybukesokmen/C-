#include <iostream>
using namespace std;

int main()
{

    int tam_sayidizi[]={5,6,7,8,9,20};
    float ondalikli_dizi[]={5.26,10.96,25};
    int toplam=0;
    int i=0,x=0;

    while(i<=5) //parantezin icine ihtimal yazilir
    {
        cout<<i<<" .index:"<<tam_sayidizi[i]<<endl;
        toplam=toplam+tam_sayidizi[i];
        i++;

    }
        while(x<=2) //parantezin icine ihtimal yazilir
    {
        cout<<x<<" .index:"<<ondalikli_dizi[x]<<endl;
        x++;
    }

    cout<<"ilk dizinin eleman toplami:"<<toplam;

}
