/*Input 4 integer values. Display average.
Test Case 1:
Input:10 22 13 16
Output:15.25

Test Case 2:
Input:15 30 18 24
Output:21.75

Test Case 3:
Input:1 2 3 4
Output:2.50*/

#include<stdio.h>

void main(){
    int a,b,c,d;
    float avg;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg = (a+b+c+d)/4.0;
    printf("%.2f",avg);
}