/*Input N. Input N elements into Array.
Input R. Imlement function to 
Rotate elements of array R times in Clock wise direction.

Test Case1:
input=5
1 2 3 4 5
2
output=4 5 1 2 3

Test Case2:
input=5
1 2 3 4 5
9
output=2 3 4 5 1
*/
#include<stdio.h>
void rotateArray(int[],int,int);
void main()
{
    int N, R, i;
    scanf("%d", &N);
    int arr[N];
    
    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);
    
    scanf("%d",&R);
    
    rotateArray(arr, N, R);
    
}
//----------------------------------------------
void rotateArray(int a[],int N,int R)
{
    int i,k;
    k = N - (R % N);
    for(i = k; i < N; i++)
        printf("%d ", a[i]);
    for(i = 0; i < k; i++)
        printf("%d ", a[i]);
}



