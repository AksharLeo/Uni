/*Write a program to implement a user defined function
to calculate factorial(n).
Input n. Pass 'n' as an argument to function.
Fuction should return n!.

test caes 1:
input=5
output=120

test case 2:
input=0
output=1

test case 3:
input=1
output=1
*/

#include<stdio.h>

int factorial(int x){
    int factorial=1;
    for(int i = x; i > 1; i--){
        factorial = factorial * i;
    }
    return factorial;
}

void main(){
    int n,fact;
    scanf("%d", &n);
    fact= factorial(n);
    printf("%d ", fact);
}