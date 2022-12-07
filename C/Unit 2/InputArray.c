/*Declare an integer array of size 5. input 5 random values.
Display each value in a new line.


TC1:
input=75 24 88 12 56.
output=75
24
88
12
56
*/

#include<stdio.h>

void main()
{
    int i,a[5];
    for(i=0;i<5;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;++i)
    {
        printf("%d\n",a[i]);
    }
}