/*input two integers base and height. Display Area of Trianlge.

Test Case 1:
Input:5 3
Output:7.5

Test Case 2:
Input:4 6
Output:12.0*/

#include<stdio.h>

void main(){
    float B,H,Area;
    scanf("%f%f",&B,&H);
    Area= (B*H)/2;
    printf("%.1f",Area);
}