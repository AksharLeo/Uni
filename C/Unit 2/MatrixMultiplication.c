/*Input Row size(M1) and Column size(N1) of Matrix A.
Input Row size(M2) and Column size(N2) of Matrix B.
Input A and B.
If Matrix Multiplication is possible display resultant Matrix A*B
otherwise display the message "Multiplication Not Possible".

Test case 1:
input=3 3
3 3
1 0 0
0 1 0
0 0 1

1 2 3
4 5 6
7 8 9
output=1 2 3
4 5 6
7 8 9

Test case 2:
input=3 2
2 3
1 2
3 4
5 6

1 2 3
4 5 6
output=9 12 15
19 26 33
29 40 51

Test case 2:
input=3 2
3 3
1 2
3 4
5 6

0 0 0
0 0 0
0 0 0
output=Multiplication Not Possible*/

#include<stdio.h>

void main()
{
    int row1,column1,row2,column2,i,j,k,total=0;
    scanf("%d %d", &row1,&column1);
    scanf("%d %d", &row2,&column2);
    
    if(row2!=column1)
    {
        printf("Multiplication Not Possible");
    }
    else{
        int matrixA[row1][column1], matrixB[row2][column2];
        int matrixAB[row1][column2];
        
        
        for(i=0;i<row1;i++)
        {
            for(j=0;j<column1;j++)
            {
                scanf("%d",&matrixA[i][j]);
            }
        }
        
        
        for(i=0;i<row2;i++)
        {
            for(j=0;j<column2;j++)
            {
                scanf("%d",&matrixB[i][j]);
            }
        }
        
        
        for(i=0;i<row1;i++)
        {
            for(j=0;j<column2;j++)
            {
                for(k=0;k<row2;k++)
                {
                    total+= matrixA[i][k] * matrixB[k][j];
                }
                matrixAB[i][j]=total;
                total=0;
            }
        }
        
        
        for(i=0;i<row1;i++)
        {
            for(j=0;j<column2;j++)
            {
                printf("%d ",matrixAB[i][j]);
            }
            printf("\n");
        }
        
    }
}


