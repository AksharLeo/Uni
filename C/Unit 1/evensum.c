/*Write a program to calculate sum of even numbers and 
sum of odd numbers in a given range M to N or N to M
Input two distinct integers M and N
Display Even Sum and Odd Sum

Test Case 1:
input=5 10
output=24 21

Test Case 2:
input=5 5
output=Invalid Input

Test Case 3:
input=10 5
output=24 21
*/

#include<stdio.h>

void main(){
    int M,N,sum_even,sum_odd;
    scanf("%d%d",&M,&N);
    if(M==N){
        printf("Invalid Input");
    }else if(N>M){
        while(M<=N){
            if(M%2==0){
                sum_even+=M;
            }else{
                sum_odd+=M;
            }
            M++;
        }
        printf("%d %d",sum_even,sum_odd);
    }else{
        while(N<=M){
            if(N%2==0){
                sum_even+=N;
            }else{
                sum_odd+=N;
            }
            N++;
        
    }
        printf("%d %d",sum_even,sum_odd);
}
}