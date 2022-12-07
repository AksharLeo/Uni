/*Write a C program to find 
the sum of individual digits of a positive integer 
and test given number is palindrome or not.

Test Case 1:
input=5
output=Palindrome

Test Case 2:
input=535
output=Palindrome

Test Case 3:
input=135
output=Not Palindrome
*/

#include<stdio.h>

void main(){
    int n, rev=0,r;
    scanf("%d",&n);
    int x=n;
    while (n>0){
        r=(n%10);
        rev=(rev*10+(r));
        n/=10;
    }
    if (rev==x){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}
