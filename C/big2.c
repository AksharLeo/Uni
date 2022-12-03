/*Input two integers. Display biggest Among them.
Test Case 1:
input:10 5
output:10

Test Case 2:
input:5 10
output:10

Test Case 3:
input:10 10
output:10

Test Case 4:
input:-10 -15
output:-10*/

#include<stdio.h>

void main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if (n1>n2){
        printf("%d",n1);
    }
    else{
        printf("%d",n2);
    }
}