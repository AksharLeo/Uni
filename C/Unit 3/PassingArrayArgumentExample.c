#include<stdio.h>
int arrayFun(int[],int);
void main()
{
    int a[5]={10,20,30,40,50},res;
    
    res=arrayFun(a,5);
    
    printf("%d",res);
}
//----------------------------------------------
int arrayFun(int p[], int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+p[i];
    }
    
    return sum;
}
