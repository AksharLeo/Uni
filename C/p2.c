/*
Input Number of Rows N(N>0). Display a pyramid of numbers as follows:

TC1:
input=1
output=
1

TC2:
input=4
output=
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>

void main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=i; ++j){
            printf("%d ",j);
        }
        printf("\n");
    }
}