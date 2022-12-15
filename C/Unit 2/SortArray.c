/*Declare an integer Array(Array size<=20). input N.
Input N random values. 
Arrange elements in ascending order.

TC1:
input=5
65 21 88 39 45
output=21 39 45 65 88

TC2:
input=8
-25 -15 0 -36 -10 -30 15 8
output=-36 -30 -25 -15 -10 0 8 15
*/

#include<stdio.h>

void main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;++i)
    {
        for(j=(i+1);j<n;++j)
        {
            if(arr[j]<arr[i])
            {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;++i)
    {
        printf("%d ",arr[i]);
    }
}   