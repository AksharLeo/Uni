/*Write a program to define user defined functions
for arithmetic 1.Addition, 2.Subtraction, 3.Multiplication,
4.Division and 5.Remineder.

input a,b and option(1/2/3/4/5).

test case 1:
input=1 
15 20
output=35

test case 2:
input=2
15 20
output=-5

test case 3:
input=3
15 20
output=300

test case 4:
input=4
15 20
output=0.75

test case 5:
input=5
155 20
output=15
*/

#include<stdio.h>

int add(int x, int y){
    return x+y;
}

int subtract(int x, int y){
    return x-y;
}

int multiply(int x, int y){
    return x*y;
}

float divide(int x, int y){
    return (float)x/y;
}

int rem(int x, int y){
    return x%y;
}

void main(){
    int a,b,option;
    scanf("%d %d %d ", &option, &a, &b);
    
    switch(option){
        case 1: printf("%d ", add(a,b));
            break;
        case 2: printf("%d ", subtract(a,b));
            break;
        case 3: printf("%d ", multiply(a,b));
            break;
        case 4: printf("%.2f ",divide(a,b));
            break;
        case 5: printf("%d ", rem(a,b));
            break;
        default: printf("Invalid");
    }
    
}
