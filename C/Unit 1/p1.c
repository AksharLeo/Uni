/*
Input Number of Rows N(N>0). Display a pyramid of *s as follows:

TC1:
input=1
output=
*

TC2:
input=4
output=
*
**
***
****
*/

#include<stdio.h>

void main(){
    int n,i,j;
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=i; ++j){
            printf("*");
        }
        printf("\n");
    }
}