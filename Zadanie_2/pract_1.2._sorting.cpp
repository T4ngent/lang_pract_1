#include <stdio.h>
#include <iostream>
using namespace std;
void normirovka(double znach[], int len)
{
double max = znach[0];
double min = znach[0];
for (int i =0; i < len; i++) {
if (znach[i]<min) {
min=znach[i];
}
if (znach[i]>max) {
max=znach[i];
}
}
cout<<"Минимальное значение:"<<endl;
cout<<min<<endl;
cout<<"Максимальное значение:"<<endl;
cout<<max<<endl;
for (int j =0; j < len; j++) {
znach[j]=(znach[j]-min)/(max-min);
}
}
int main()
{
double znach[100];
int i = 0;
for (i =0; i < 5; i++) {
cin >> znach[i];
}
normirovka (znach,100);
cout<<"Значения после нормировки:"<<endl;
for (i =0; i < 5; i++) {
cout<<znach[i]<<endl;
}
return 0;
}
