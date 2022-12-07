/*Write Program to Calculate Simple and Compound Interest.
Input principal amount (p), time in year (t) andrate in percent (r)
Display Simple Interest and Compound Interest

Test Case 1:
Input:
Enter principal amount (p):5000
Enter time in year (t):2
Enter rate in percent (r):18
Output:
Simple Interest=1800.000
Compound Interest=1962.001*/

#include<stdio.h>
#include<math.h>

void main(){
    float p,t,r;
    float SI,CI;
    printf("Enter principal amount (p):");
    scanf("%f",&p);
    printf("Enter time in year (t):");
    scanf("%f",&t);
    printf("Enter rate in percent (r):");
    scanf("%f",&r);
    SI= (p*r*t)/100;
    printf("Simple Interest=%.3f\n",SI);
    CI= (p*(pow((1+(r/100)),t)))-p;
    printf("Compound Interest=%.3f",CI);
    
}