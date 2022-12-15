/*Declare an integer Array(Array size<=20).
Input N. Input N random values.
Display the length of longest continuous increasing sub-sequence.

Test Case:
input=9 2 4 0 3 4 6 9 2 8
output=5*/

#include<stdio.h>

void main()
{
    int n,count=1,max=1,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;++i)
    {
        if(arr[i]<arr[i+1])
        {
            count++;
        }
        else
        {
            if(max<count)
            {
                max=count;
            }
            count=1;
        }
    }
    printf("%d",max);
}