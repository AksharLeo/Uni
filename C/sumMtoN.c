/*Write a C program to calculate sum of natural numbers from M to N
input M and N. Display sum

Test Case 1:
input=5 8
output=26

Test Case 2:
input=8 5
output=Invalid Input
*/

#include<stdio.h>

void main(){
    int M,N,sum=0;
    scanf("%d%d",&M,&N);
    if(M>N){
        printf("Invalid Input");
    }else{
        while(M<=N){
            sum+=M;
            M++;
        }
        printf("%d",sum);
    }
}