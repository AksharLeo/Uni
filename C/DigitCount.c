/*Write a prgram to input an integer N. Count number of digits in N.
Display the count.

Test Case 1:
input=123
output=3

Test Case 2:
input=68945712534
output=11
*/

#include<stdio.h>

void main(){
    int c=0;
    long long n;
    scanf("%lld",&n);
    while(n>0){
        n/=10;
        c++;
    }
    printf("%d",c);
}