#include <stdio.h>
#include <stdlib.h>

int* getData(int *length)
{
    int *ptr;
    int i;
    ptr = 0;
    printf("Введите число элементов\n");
    scanf("%d",length);
    printf("Выделяем память под массив размера %d\n",*length);
    ptr = (int*)malloc((*length)*sizeof(int)); 
    if(ptr == 0)
      return ptr;
    for(i=0;i<(*length);i++)
    {
        printf("Введите элемент № %d\n",i+1);
        scanf("%d",(ptr+i));
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
           printf("Значение элемента %d равно %d\n",i+1,a[i]);
        for(i=0;i<len-2;i++)
        {
          nMin = i ;
          for ( j = i-1; j < len-1; j ++)
          
            if( a[j] < a[nMin] ) 
             nMin = j;
           
         }
        printf("Значение минимального элемента равно %d\n",a[nMin]);
        return 1;
}         