/*Write a program to check given number is ARMSTRONG or NOT.
Armstrong number is a number that is equal to the sum of cubes of its digits.
Display YES if it is armstrong, NO otherwise.

Test Case 1:
input=153
output=YES

Test Case 2:
input=1
output=YES

Test Case 3:
input=123
output=NO*/

#include<stdio.h>

void main(){
    int n,x,d,cube=0;
    scanf("%d",&n);
    x=n;
    while(n>0){
        d=n%10;
        cube+=(d*d*d);
        n/=10;
    }
    if(x==cube){
        printf("YES");
    }else{
        printf("NO");
    }
}