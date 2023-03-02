//DERS VAR MI YOK MU
#include<iostream>
using namespace std;
int main()
{
    int gun_numara;
    bool ders_durumu;
    cout<<"Gun numarasini giriniz:";
    cin>>gun_numara;

    switch(gun_numara)
    {
    case 1:
        ders_durumu=false;
        cout<<"PAZARTESI";
        break;
    case 2:
        ders_durumu=false;
    case 3:
        //ders_durumu=true;
        cout<<"DERSÝNÝZ VARDIR";
        cout<<"CARSAMBA";
        break;
    case 4:
        ders_durumu=false;
    case 5:
        ders_durumu=false;
    case 6:
        ders_durumu=false;
        break;
    case 7:
        cout<<"PAZAR";
        ders_durumu=true;
        break;
    default:
        cout<<"HATALI";
    }
    if(ders_durumu==true)
    {
        cout<<"\r\nDERSINIZ VARDIR ";
    }
    else
    {
        cout<<"DERS YOKTUR";
    }


}
