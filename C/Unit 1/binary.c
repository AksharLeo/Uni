/*Write a program that shows the binary equivalent 
of a given positive number between 0 to 255
Note:Ignore Most significant 0s.

TC1:
input=10
output=1010

TC2:
input=26
output=11010

TC3:
input=255
output=11111111*/

#include<stdio.h>

void main(){
    int n,r,d=1,bin=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%2;
        bin+=(r*d);
        d*=10;
        n/=2;
    }
    printf("%d ",bin);
}