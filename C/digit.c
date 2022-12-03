/*Write a C program to input a digit(0-9) and display it in English.
Test Case 1:
input=1
output=ONE

Test Case 2:
input=7
output=SEVEN*/

#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 0:
            printf("ZERO");
            break;
        case 1:
            printf("ONE");
            break;
        case 2:
            printf("TWO");
            break;
        case 3:
            printf("THREE");
            break;
        case 4:
            printf("FOUR");
            break;
        case 5:
            printf("FIVE");
            break;
        case 6:
            printf("SIX");
            break;
        case 7:
            printf("SEVEN");
            break;
        case 8:
            printf("EIGHT");
            break;
        case 9:
            printf("NINE");
            break;
        default:
            printf("ERROR");
    }
}