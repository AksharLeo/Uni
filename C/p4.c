/*Write a C program to construct a pyramid of numbers as follows:
TC1:
input=3
output=
1
2 3
4 5 6

TC2:
input=5
output=
1
2 3
4 5 6
7 8 9 1
2 3 4 5 6
*/

#include<stdio.h>

void main(){
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=i; ++j){
            printf("%d ",k);
            k++;
            if(k>9){
                k=1;
            }
        }
        printf("\n");
    }
}