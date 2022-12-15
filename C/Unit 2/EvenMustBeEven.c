/*Declare an integer array(Array size<=20).
Input N. Input N values.
Positions of values can be defined from 1 to n.
a[0] is at position-1
a[1] is at position-2 ...
Check all the values in even positions are even or not.
If so display YES, otherwise NO.

TC1:
input=8
10 12 14 15 17 18 20 22
output=NO

TC2:
input=8
10 12 14 16 17 18 20 21
output=NO

TC3:
input=8
10 12 14 16 17 18 20 22
output=YES

TC3:
input=8
11 13 15 17 19 21 23 25
output=NO*/

#include<stdio.h>

void main()
{
    int n,flag=0,i;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            if(i%2==1)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("YES");
    else
        printf("NO");
}