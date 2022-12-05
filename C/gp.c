/*Input x and n, and then compute the sum of this geometric progression: 
1+x+x^2+x^3+………….+x^n.
For example: if x is 5 and n is 3, 
then the program computes 1+5+25+125.
TC1:
input=5 3
output=156

TC2:
input=4 4
output=341*/

#include<stdio.h>
#include<math.h>

void main(){
    int x,n,i,result=1;
    scanf("%d%d",&x,&n);
    for(i=1; i<=n; ++i){
        result+=(pow(x,i));
    }
    printf("%d", result);
}