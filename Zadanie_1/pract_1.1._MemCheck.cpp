/****************************************************
 * Языки программирования. Программа 4 *
 * (с) ИБСТ *
 * Выполни проверку использования памяти программой *
 * с помощью MemCheck *
 ****************************************************/
#include <iostream>
using namespace std;
// раскомментируй в зависимости от твеой группы
//#define PI1
//#define PT1
#define PT2
// вместо нуля поставь последние три цифры из номера зачетки
#define NUM 210
#define SIZE (NUM*100)
int main()
{
#if NUM==0
#error NUM not properly defined
#endif
#ifdef PI1
typedef char T;
#elif defined PT1
typedef int T;
#elif defined PT2
typedef double T;
#else
#error Group not selected
#endif
T * pT = new T [SIZE];
T * pT2 = new T [100];
pT[SIZE-1] = 65 + SIZE % 26; //раньше происходил выход за
границы массива
pT2[10] = 65 + NUM /10.0;
cout<<pT[SIZE]<<endl;
cout<<pT2[10]<<endl; //раньше память высвобождалась после
удаления
delete[] pT2;
delete[] pT; //раньше без удаления памяти происходила утечка
return 0;
}

