#include <iostream>
using namespace std;

class Ceptelefonu
{
public:
    char marka[30];
    char model[30];
    int fiyat;
    bool aramaDurum;
    bool mesajDurum;

    Ceptelefonu(int x_fiyat){
        fiyat = x_fiyat;
    }
    ~Ceptelefonu(){
        cout << "Nesne yok edildi." << endl;
    }
    void arama();
    void mesaj_gonder();
};
void Ceptelefonu::arama()
{
    aramaDurum = true;
    cout << "Istediginiz arama gerceklestiriliyor." << endl;
}
void Ceptelefonu::mesaj_gonder()
{
    mesajDurum = true;
    cout << "Istediginiz mesaj gonderiliyor." << endl;
}

int main()
{
    Ceptelefonu urun1(4500);
    Ceptelefonu urun2 = Ceptelefonu(3750);
    cout << "Urun 1 baslangic fiyati: " << urun1.fiyat << endl;
    cout << "Urun 2 baslangic fiyati: " << urun2.fiyat << endl;
    return 0;
}
