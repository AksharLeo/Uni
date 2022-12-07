/*Input a number N (where N is not divisible by 10), check all the odd position digits are odd or not.
Display "YES" if all odd positioned are odd digits, Otherwise "NO".
For Ex. N=65423 (6,4,3 are in odd position but 6 and 4 are not odd digits)
position 1:6
position 2:5
position 3:4
position 4:2
position 5:3

Test Case 1:
input=65423
output=NO

Test Case 2:
input=54723
output=YES*/

#include<stdio.h>

void main(){
    int N,pos=0,rev=0,d,flag=1;
    scanf("%d",&N);
    if(N%10!=0){
        while(N>0){
            d=N%10;
            rev=(rev*10)+d;
            N/=10;
        }
        while(rev!=0){
            pos++;
            d=(rev)%(10);
            if(pos%2==1){
                if((d)%(2)==0){
                    flag=0;
                    break;
                    }
                }
            rev/=10;
            }
        }else{
            printf("NO");
        }
    if(flag==1){
        printf("YES");
    }else{
        printf("NO");
    }
}