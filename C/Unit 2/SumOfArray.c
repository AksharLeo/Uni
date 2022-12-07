/*Declare an integer Array. input N.
Input N random values. 
Display sum of those values.

TC1:
input=5
65 21 88 39 45
output=258

TC2:
input=5
-25 -15 -36 -10 -30
output=-116
*/

#include<stdio.h>

void main()
{
    int N,sum=0,i;
    scanf("%d",&N);
    int a[N];
    
    for(i=0;i<N;++i)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
}