/*
x is a fractional value. (n>0)
Input x,n. Calculate and display result of follwing Series.
1-x/2 +x^2/4-x^3/6+...

TC1:
input=5 1
output=-1.500000

TC2:
input=5 3
output=-16.083334
*/

#include<stdio.h>
#include<math.h>

void main(){
    int x,n,i;
    float result;
    scanf("%d%d",&x,&n);
    if(n>0){
        x=-x;
        for(i=1; i<=n; ++i){
            result+= pow(x,i)/(2*i);
        }
        printf("%f",1+result);
    }
}