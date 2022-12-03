/*Input a number and check whether it is EVEN or ODD
Test Case 1:
input=5
output=ODD

Test Case 2:
input=8
output=EVEN

Test Case 3:
input=0
output=EVEN*/

#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    if (n%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
}