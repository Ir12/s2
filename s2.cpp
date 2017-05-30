#include <iostream>
using namespace std;
int* getData(int *length)
{
int *ptr;
int i;
ptr = 0;
cout <<"Введите число элементов\n";
cin >>length;
cout <<"Выделяем память под массив размера \n"<<*length;
int *ptr = new int [i] ptr;
if(ptr == 0)
return ptr;
for(i=0;i<(*length);i++)
{
cout <<"Введите элемент № \n"<<i+1;
cin >>(ptr+i);
}
return ptr;
}

int main()

{
int *p,*sort;
int len;
int i,j;
int *a;
int nMin;
p = getData(&len);
for(i=0;i<len;i++)
{
a[i]=p[i]*p[i+1];
}
for(i=0;i<len-1;i++)
cout <<"Значение элемента" << i+1 << "равно \n"<< a[i]);
for(i=0;i<len-2;i++)
{
nMin = i ;
for ( j = i-1; j < len-1; j ++)

        if( a[j] < a[nMin] ) 
         nMin = j;
       
     }
    cout <<"Значение минимального элемента равно \n"<<a[nMin]);
    return 1;

}
