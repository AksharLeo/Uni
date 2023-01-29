/*Input N. Input N elements.
Implement a function to return Largest after reversing each element of the array.

Test Case1:
input=5
102 500 257 790 345
output=752

*/
#include<stdio.h>
int reverseMax(int[],int);
void main()
{
   int arr[20], i, size, max;
   scanf("%d",&size);
   
   for(i = 0; i < size; i++)
       scanf("%d",&arr[i]);
   
   max = reverseMax(arr, size);
   printf("%d",max);
}
//-----------------------------
int reverseMax(int a[],int N)
{
    int rev, temp, biggest;
    
    for(int i = 0; i < N; i++)
    {
        temp = a[i];
        rev = 0;
        while(temp){
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        a[i] = rev;
    }
    
    biggest = a[0];
    for(int i = 1; i < N; i++)
        if(a[i] > biggest) biggest = a[i];  
    
    return biggest;
}