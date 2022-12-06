/*A Fibonacci sequence is defined as follows: 
the first and second terms in the sequence are 0 and 1. 
Subsequent terms are found by adding the preceding two terms in the sequence. 
Input 'n'.Write a C program to generate the first 'n' terms of the sequence.

TC1:
input=1
output=0

TC2:
input=2
output=0 1

TC3:
input=7
output=0 1 1 2 3 5 8

TC4:
input=15
output=0 1 1 2 3 5 8 13 21 34 55 89 144 233 377*/

#include<stdio.h>

void main(){
    int n,i=0,j=1,fibonacci;
    scanf("%d",&n);
    printf("%d %d ",0,1);
    while(n>2){
        fibonacci=(i+j);
        printf("%d ",(fibonacci));
        i=j;
        j=fibonacci;
        n--;
    }
}