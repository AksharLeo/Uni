/*Input two digit number(for Ex. 25) and 
Display the digits in English(for Ex. Two Five).

Test Case 1:
input=25
output=TWO FIVE

Test Case 2:
input=72
output=SEVEN TWO

Test Case 3:
input=9
output=INVALID INPUT*/


#include<stdio.h>

void main(){
    int n,rev=0,d,x;
    scanf("%d",&n);
    x=n;
    if((n>9)&&(n<100)){
        while(n>0){
            d= n%10;
            rev=(rev*10)+d;
            n/=10;
        }
        while(rev>0){
            switch(rev%10){
                case 0:
                    printf("ZERO ");
                    break;
                case 1:
                    printf("ONE ");
                    break;
                case 2:
                    printf("TWO ");
                    break;
                case 3:
                    printf("THREE ");
                    break;
                case 4:
                    printf("FOUR ");
                    break;
                case 5:
                    printf("FIVE ");
                    break;
                case 6:
                    printf("SIX ");
                    break;
                case 7:
                    printf("SEVEN ");
                    break;
                case 8:
                    printf("EIGHT ");
                    break;
                case 9:
                    printf("NINE ");
                    break;
            }
        rev/=10;
        }
        if(x%10==0){
            printf("ZERO ");
        }
    }else{
        printf("INVALID INPUT");
    }
}