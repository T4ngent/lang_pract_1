#include <stdio.h>
#include <iostream>
using namespace std;
double* normirovka(double* znach, int len)
{
 double *znach2 = new double[100];
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
 cout<<"Минимальное значение:"<<min<<endl;
 cout<<"Максимальное значение:"<<max<<endl;
 for (int j =0; j < len; j++) {
 znach2[j]=(znach[j]-min)/(max-min);
 }
 cout <<"Новый массив:"<< znach2 << endl;
 return znach2;
}
int main(int argc, char **argv)
{
 double *znachlast = new double[100];
 double *znach = new double[100];
 int i = 0;
 for (i = 0; i < 5; i++) {
 cin >> znach[i];
 cout<< &znach[i]<<endl;
 }
 znachlast = normirovka (znach,100);
 cout <<"Исходный массив:" << znach << endl;
 cout <<"Массив из функции:" << znachlast << endl;
 cout<<"Значения после нормировки:"<<endl;
 for (i = 0; i < 5; i++) {
 cout<<znachlast[i]<<endl;
 cout<< &znachlast[i]<<endl;
 }
 delete [] znachlast;
 delete [] znach;
 return 0;
}
