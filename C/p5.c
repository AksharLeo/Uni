/*Write a C program to construct a pyramid of numbers as follows:
case=1
input=3
output=
  1
 2 3
4 5 6

case=2
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
    int n,i,j,k,l=1;
    scanf("%d",&n);
    int spaces=n;
    for(i=1; i<=n; ++i){
        for(j=1; j<=spaces; ++j){
            printf(" ");
        }
        spaces--;
        for(k=1; k<=i; ++k){
            printf("%d ",l);
            l++;
            if(l>9){
                l=1;
            }
        }
        printf("\n");
    }
}
    