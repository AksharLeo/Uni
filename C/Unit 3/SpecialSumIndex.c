/*Input N. Input N elements a[0] to a[N-1].
Implement a function that should return the 'Special Sum index' of this array. 
An index of the array is called Special Sum Index' if 
the special sum of this index is maximum across the special sum of all the other indices.
For Ex.
Special Sum of index 0 is a[0]+(a[1]+a[2])+(a[3]+[4]+a[5])+.... 
special Sum of index i is a[i]+(a[i+1]+a[i+2])+(a[i+3]+a[i+4]+a[i+3])+...
Note Index should not cross N-1. We should consider partial sum only when it is possible.

Test Case1:
input=5
1 3 1 2 5

output=2

Explanation:
for index 0 special sum is 1+(3+1)=5
for index 1 special sum is 3+(1+2)=6
for index 2 special sum is 1+(2+5)=8
for index 3 special sum is 2=2
for index 4 special sum is 5=5
8 is maximum, so Specil Su index is 2

Test Case 2:
input=10
2 1 3 9 2 4 -10 -9 1 3
output=1
*/
#include<stdio.h>
int specialSumIndex(int*,int);
void main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("%d", specialSumIndex(arr, n));
}

int specialSumIndex(int *arr,int n)
{
    int final = -32767;
    int final_index;
    for(int i = 0; i < n; i++)
    {
        int counter = 2;
        int sum = arr[i];
        int j = i+1;
        while(counter < n - j)
        {
            int m = j + counter;
            for(j; j < m; j++)
                sum += arr[j];
            counter++;
        }
        if(sum > final)
        {
            final = sum;
            final_index = i;
        }
    }
    return final_index;
}

