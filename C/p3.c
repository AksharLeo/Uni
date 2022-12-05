/*Write a C program to construct a pyramid of numbers as follows:

case=1
input=1
output=
1

case=2
input=4
output=
1
2 2
3 3 3
4 4 4 4
*/

#include<stdio.h>

void main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=i; ++j){
            printf("%d ",i);
        }
        printf("\n");
    }
}