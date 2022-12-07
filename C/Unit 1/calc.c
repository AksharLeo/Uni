/*Write a C program, which takes 
two integer operands and one operator from the user, 
performs the operation and then prints the result. 
(Consider the operators +,-,*, /, % and use Switch Statement)

Test Case 1:
input=10 20
+
output=30

Test Case 2:
input=10 20
-
output=-10

Test Case 3:
input=10 20
*
output=200

Test Case 4:
input=20 10
/
output=2

Test Case 5:
input=123 10
%
output=3*/

#include<stdio.h>

void main(){
    int a,b;
    char x;
    scanf("%d%d",&a,&b);
    scanf(" %c",&x);
    
    switch(x){
        case '+':
            printf("%d",(a+b));
            break;
        case '-':
            printf("%d",(a-b));
            break;
        case '*':
            printf("%d",(a*b));
            break;
        case '/':
            printf("%d",(a/b));
            break;
        case '%':
            printf("%d",(a%b));
            break;
        default:
            printf("Invalid");
    }
}