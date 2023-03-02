#include<iostream>

using namespace std;
int main()
{
    cout<<"***DENEYAP YOKLAMA YAZILIMINA HOSGELDINIZ***"<<endl<<endl;
    cout<<"Ogrenci var mi?(var ise 1,yok ise 0'a basiniz.)"<<endl;
    int ogrenci_sira_no,ogrenci_sayisi;
    ogrenci_sayisi=18;
    bool yoklama_durumu=0;
    int sayac=1;
    int toplam_yok=0;
    string yok_olan_ogrenci_ad;
        while(sayac<19)
    {
        ogrenci_sira_no=sayac;
        cout<<ogrenci_sira_no<<" ";

          switch(ogrenci_sira_no)
    {
        case 1:
            cout<<"Ahsen Sena ARIKAN-";
            break;
        case 2:
            cout<<"ARDA ADAKLI-";
            break;
        case 3:
            cout<<"Asya GOKULU-";
            break;
        case 4:
            cout<<"Beren ERDOGAN-";
            break;
        case 5:
            cout<<"Besir Mert DIKBAS-";
            break;
        case 6:
            cout<<"Can KOCABIYIK-";
            break;
        case 7:
            cout<<"Cemil Emre Gurdal-";
            break;
        case 8:
            cout<<"Cemil Furkan GOK-";
            break;
        case 9:
            cout<<"CAGAN GUNES-";
            break;
        case 10:
            cout<<"Defnenaz OZDEMIR-";
            break;
        case 11:
            cout<<"Ecrin BASCIFTCI-";
            break;
        case 12:
            cout<<"EYMEN YIGIT KONAK-";
            break;
        case 13:
            cout<<"Hasan OZIS-";
            break;
        case 14:
            cout<<"HAZÝM METE DEMIRBILEK-";
            break;
        case 15:
            cout<<"Omer Sukru SINAN-";
            break;
        case 16:
            cout<<"Nur Banu KEYIK-";
            break;
        case 17:
            cout<<"Emre GULER-";
            break;
        case 18:
            cout<<"KEMAL BURAK CAKICI-";
            break;
        default:
            cout<<"Eksik ya da yanlis tuslama yaptiniz.";
            break;
    }

        cin>>yoklama_durumu;

        if(yoklama_durumu==false)
        {
            toplam_yok++;
            cout<<endl<<"******YOK OLAN OGRENCI*****"<<ogrenci_sira_no<<endl;

        }
        if(ogrenci_sira_no==18)
        {
            cout<<"Sinifinizda toplamda "<<toplam_yok<<" ogrenci yoktur.";
        }

        sayac++;

        cout<<endl;




    }









}
