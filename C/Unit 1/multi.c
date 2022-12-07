/*Write a program that prints a multiplication table 
for a given number and the number of rows in the table. 
For example, for a number 5 and rows = 3, 
the output should be:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15

case 1:
input=5 3
output=5 x 1 = 5
5 x 2 = 10
5 x 3 = 15

case 2:
input=9 2
output=9 x 1 = 9
9 x 2 = 18*/

#include<stdio.h>

void main(){
    int n,r,i=0;
    scanf("%d%d",&n,&r);
    while (i<r){
    i++;
    printf("%d x %d = %d\n",n,i,(n*i));
    }
}