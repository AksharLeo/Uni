/*Declare an integer Array(Array size<=20). input N.
Input N random values.
Input an element to insert.
Input the position at which new elemnt to be inserted.

TC1:
input=5
65 21 88 39 45
100
3
output=65 21 100 88 39 45

TC2:
input=8
10 25 46 78 20 19 65 38
100
1
output=100 10 25 46 78 20 19 65 38

TC3:
input=8
10 25 46 78 20 19 65 38
100
9
output=10 25 46 78 20 19 65 38 100

TC4:
input=8
10 25 46 78 20 19 65 38
100
10
output=Not Possible

TC5:
input=8
10 25 46 78 20 19 65 38
100
0
output=Not Possible
*/

#include<stdio.h>

void main()
{
    int n,element,position,i;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&element,&position);
    
    
    if((position>n+1) || (position<1))
    {
        printf("Not Possible");
    }
    else
    {
        for(i=n;i>=position;i--)
        {
            arr[i]=arr[i-1];
        }
        
        arr[position-1]= element;
        
        for(i=0;i<n+1;++i)
        {
            printf("%d ",arr[i]);
        }
    }
}