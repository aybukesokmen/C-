#include<iostream>
#include <ctime>

using namespace std;


int sayac=0;
void rastgele_sayi_uret(int random_sayi1,int random_sayi2)
{
      char klavye_space;
      cout<<"ZAR ATMAK ISTERMISIN (E/H)"<<endl;cin>>klavye_space;
      if(klavye_space=='E')
      {
        srand(time(NULL));
        random_sayi1=rand()%6+1;
        random_sayi2=rand()%6+1;
        cout<<random_sayi1<<endl<<random_sayi2<<endl;

      }
      else if(klavye_space!='E' && klavye_space!='H')
      {
          cout<<"YANLIS TUSLAMA"<<endl;
          sayac++;
          if(sayac>4)
          {
              cout<<"PROGRAMDAN CIKILDI";
          }

      }
      else
      {
          cout<<"PROGRAMDAN CIKILDI";
      }

}

int main()
{
    cout<<"*********ZAR ATMA PROGRAMINA HOSGELDINIZ*********"<<endl;
     int rastgele_sayi_1,rastgele_sayi_2;
     rastgele_sayi_uret(rastgele_sayi_1,rastgele_sayi_2);
     while(sayac<5 && sayac!=0)
     {
        rastgele_sayi_uret(rastgele_sayi_1,rastgele_sayi_2);
     }
     if(rastgele_sayi_1>rastgele_sayi_2)
     {
         cout<<"BÝRÝNCÝ KULLANICI TEBRIKLER";
     }
     else if(rastgele_sayi_2==rastgele_sayi_1)
     {
         cout<<"ESITLIK";

     }
     else
     {
         cout<<"IKINCI KULLANICI TEBRIKLER";
     }

}
