/*Input N. Display all the prime numbers 
between 1 and N.

TC1:
input=6
output=2 3 5

TC2:
input=15
output=2 3 5 7 11 13*/

#include<stdio.h>

void main(){
    int n,flag,i,j;
    scanf("%d",&n);
    for(i=2; i<n; ++i){
        flag=0;
        for(j=2; j<=(i/2); ++j){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
}