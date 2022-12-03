/*Input a number and check whether it is +Ve or -Ve or ZERO
Test Case 1:
input=5
output=+Ve

Test Case 2:
input=-8
output=-Ve

Test Case 3:
input=0
output=ZERO*/

#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("-Ve");
    }else if(n>0){
        printf("+Ve");
    }else{
        printf("ZERO");
    }
}