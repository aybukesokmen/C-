#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	double temp;
	double dizi[]={0.005,10/200,15,13,15,22,42,21,99,4};
	for(int i=0;i<10-1;i++)
		for(int j=0;j<10-1;j++)
		{
		if(dizi[j]>dizi[j+1])
		{
		temp=dizi[j];
		dizi[j]=dizi[j+1];
		dizi[j+1]=temp;
		}
	}
	for (int i=0;i<10;i++)
	{
		cout<<dizi[i]<<"  ";
	}
}
