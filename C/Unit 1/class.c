/*Write program that declares Class awarded for a given percentage of marks, 
where mark <40%= Failed, 40% to <60% = Second class, 
60% to <70%=First class, >= 70% = Distinction.
Read percentage from standard input.

test case=1
input=35
output=Failed

test case=2
input=58
output=Second Class

test case=3
input=65
output=First Class

test case=4
input=85
output=Distinction

test case=5
input=102
output=Invalid Input

test case=6
input=-10
output=Invalid Input*/

#include<stdio.h>

void main(){
    int p;
    scanf("%d",&p);
    
    if ((p<=100) && (p>=0)){
        if (p>=70){
            printf("Distinction");
        }
        else if(p>=60){
            printf("First Class");
        }
        else if(p>=40){
            printf("Second Class");
        }
        else{
            printf("Failed");
        }
    }
    else{
        printf("Invalid Input");
    }
    
}