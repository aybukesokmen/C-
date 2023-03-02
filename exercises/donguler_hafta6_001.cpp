#include <iostream>
#include <ctime>

using namespace std;

int main() {
int sayi;
int bolen_Sayac=1;
cout<<"Sayi gir:" ;
cin>>sayi;
    for(int i=1;i<=200;i++)
    {
        if(sayi%i==0)
        {
            cout<<bolen_Sayac<<". bolen"<<i<<endl;
            bolen_Sayac++;
        }
    }


  return 0;
}
