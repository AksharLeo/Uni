/*Strong number is a special number whose 
sum of the factorial of digits is equal to the original number. 
For Example: 145 is strong number. 
Since, 1! + 4! + 5! is 145.
Input N, display YES if N is Strong Number NO otherwise.

TC1:
input=145
output=YES

TC2:
input=121
output=NO*/

#include<stdio.h>

void main(){
    int n,x,d,fact,sum=0,i;
    scanf("%d",&n);
    x=n;
    while(n>0){
        fact=1;
        i=1;
        d=n%10;
        n/=10;
        while(i<=d){
            fact*=i;
            i++;
        }
        sum+=fact;
    }
    if(sum==x){
        printf("YES");
    }else{
        printf("NO");
    }
}