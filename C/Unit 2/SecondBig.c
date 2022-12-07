/*Declare an integer Array. input N.
Input N random values. 
Display 2nd Biggest.

TC1:
input=5
65 21 88 39 45
output=65

TC2:
input=6
-25 -15 0 -36 -10 -30
output=-10
*/

#include<stdio.h>

void main()
{
    int n,i,biggest,secondBig;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    biggest=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]>biggest)
        {
            biggest=a[i];
        }
    }
    secondBig=a[0];
    for(i=0;i<n;++i)
    {
        if((a[i]<biggest)&&(a[i]>secondBig))
        {
            secondBig=a[i];
        }
    }
    printf("%d",secondBig);
}