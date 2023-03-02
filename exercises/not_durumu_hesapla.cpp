//mevsim
#include<iostream>

using namespace std;

int main()
{

    string mevsim;
    cout<<"Mevsimi giriniz";cin>>mevsim;
    switch(mevsim)
    {
    case "kis":
        cout<<"Aralik,Ocak,Subat";
        break;
    case "ilkbahar":
        cout<<"Mart,Nisan,Mayis";
        break;
    default:
        cout<<"Boyle bir mevsim yok";
        system("cls");



    }

}
