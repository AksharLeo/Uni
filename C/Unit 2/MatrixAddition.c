/*Input Row size(M1) and Column size(N1) of Matrix A.
Input Row size(M2) and Column size(N2) of Matrix B.
Input A and B.
If Matrix addition is possible display resultant Matrix A+B otherwise 
display the message "Addition Not Possible".

Test case 1:
input=3 4
3 4
1 2 3 4
5 6 7 8
4 8 7 3

10 10 10 10
10 10 10 10
10 10 10 10
output=11 12 13 14
15 16 17 18
14 18 17 13

Test case 2:
input=3 4
4 3
1 2 3 4
5 6 7 8
4 8 7 3

10 10 10
10 10 10
10 10 10
10 10 10
output=Addition Not Possible*/

#include<stdio.h>

void main()
{
    int r1,c1,r2,c2,i,j;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    
    int arrA[r1][c1];
    int arrB[r2][c2];
    int arrAdded[r1][c1];
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arrA[i][j]);
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arrB[i][j]);
        }
    }
    
    if(r1==r2 & c1==c2)
    {
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            {
                arrAdded[i][j]= arrA[i][j]+arrB[i][j];
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",arrAdded[i][j]);
            }
            printf("\n");
        }
        
    }
    else
        printf("Addition not Possible");
    
    
}