/*Write a program to display factors of a given Number N.
Input a positive integer N>0. Display all its factors.

Test Case 1:
input=20
output=1 2 4 5 10

Test Case 2:
input=1
output=1

Test Case 3:
input=11
output=1 11*/

#include<stdio.h>

void main(){
    int N,i=1;
    scanf("%d",&N);
    if(N>0){
        while(i<=N){
            if(N%i==0){
                printf("%d ",i);
            }
        i++;
        }
    }
}