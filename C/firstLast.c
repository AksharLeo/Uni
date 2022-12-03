/*Write program to input a postive integer.
Swap first and last digits of given number.

Test Case 1:
input=5246
output=6245

Test Case 2:
input=5
output=5*/

#include<stdio.h>
#include<math.h>

void main(){
    int n,x,first,last,c,final,digits,middle;
    scanf("%d",&n);
    x=n;
    if((n>9)||(n<-9)){
        while(n!=0){
            n/=10;
            c++;
        }
        
        last= x%10;
        first= (x/pow(10,c-1));
        digits=(pow(10,c-1));
        middle= (((x)%(digits))/10)*10;
        final= ((last)*(digits))+(middle+first);
        printf("%d",final);
        
    }else{
        printf("%d",n);
    }
}