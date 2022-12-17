/*Input Row size and Column size of Matrix.
Input Matrix.
Find Biggest in each row and display as shown bellow.

case=1
input=3 4
10 8 4 15
42 34 39 25
12 52 32 42
output=15
42
52

case=2
input=4 3
10 8 4
42 34 39
12 52 32
10 15 20
output=10
42
52
20*/

#include<stdio.h>

void main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    int biggest[r];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(i=0;i<r;i++)
    {
        biggest[i] = matrix[i][c-1];
    }
    
    for(i=0;i<r;i++)
    {
        for(j=c;j>0;j--)
        {
            if((matrix[i][j-1])>(biggest[i]))
            {
                biggest[i]=matrix[i][j-1];
            }
        }
    }
    
    for(i=0;i<r;i++)
    {
        printf("%d\n",biggest[i]);
    }
}