/*input value in Celsius and convert it to Fahrenheit. Display in Fahrenheit.
Test Case 1:
Input:12.5
Output:54.5

Test Case 2:
Input:0
Output:32*/


#include<stdio.h>

void main(){
    float C,F;
    scanf("%f",&C);
    F= (C*(9/5.0))+(32);
    printf("%.1f",F);
}