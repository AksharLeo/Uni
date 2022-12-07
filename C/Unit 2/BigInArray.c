/*Declare an integer Array. input N.
Input N random values. 
Display Biggest among them.

TC1:
input=5
65 21 88 39 45
output=88

TC2:
input=5
-25 -15 -36 -10 -30
output=-10
*/

#include<stdio.h>

void main()
{
    int n,i,big;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    big=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    printf("%d",big);
}