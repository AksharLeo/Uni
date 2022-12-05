/*Write a program that finds if a given number is a prime number

case=1
input=10
output=Not Prime

case=2
input=11
output=Prime*/

#include<stdio.h>

void main(){
    int n,i=2,flag=1;
    scanf("%d",&n);
    while(i<(n/2)){
        if (n%i==0){
            flag=0;
            break;
        }
        i++;
    }
    if (flag==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}