#include <iostream>
#include <cstring>
#include"Nokta.h"
using namespace std;
class Nokta{
    int x,y;
    public:
    void git(int, int);
    void goster();
    void sifir_mi();
    ~Nokta(){cout<<"SILINDI"<<endl;}
};
void Nokta::git(int yeni_x,int yeni_y)
{
    x=yeni_x;
    y=yeni_y;

}
void Nokta::goster()
{
    cout << "X noktasi: " << x << ", Y noktasi: " << y << endl;

}
void Nokta::sifir_mi(){
    if ((x == 0) && (y == 0))
    cout << "n1 su anda sifir noktasindadir." << endl;
    else
    cout << "n1 su anda sifir noktasinda degildir." << endl;

}
