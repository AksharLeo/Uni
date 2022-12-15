/*Declare an integer Array(Array size<=20).
Input N. Input N positive values.
Count even nubers and odd numbers.
Display the count.

TC1:
input=8
12 16 35 87 42 69 125 71
output=Even Count 3
Odd Count 5

TC2:
input=6
10 20 30 40 50 60
output=Even Count 6
Odd Count 0

TC3:
input=6
15 25 35 45 55 65
output=Even Count 0
Odd Count 6*/

#include<stdio.h>

void main()
{
    int n,even_count=0,odd_count=0,i;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("Even Count %d \nOdd Count %d",even_count,odd_count);
    
    
}