/*Input Row size and Column size of Matrix A.
Input MAtrix A.
Display A as shown in test cases

Test Case 1:
input=2 3
10 20 30
40 50 60
output=10 20 30
40 50 60

Test Case 2:
input=3 4
10 20 30 40
50 60 70 80
10 20 30 40
output=10 20 30 40
50 60 70 80
10 20 30 40*/

#include<stdio.h>

void main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}