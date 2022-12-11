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
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d ",a[n-2]);
}
