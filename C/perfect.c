/*perfect number, a positive integer that is equal to the sum of its proper divisors.

Input a numbr N. Display YES if it is Perfect Number, otherwise NO.

Test Case 1:
input=6
output=YES

Test Case 2:
input=28
output=YES

Test Case 3:
input=9
output=NO*/

#include<stdio.h>

void main(){
    int n,i=1,sum;
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==n){
        printf("YES");
    }else{
        printf("NO");
    }
}