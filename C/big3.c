/*Input three integers. Display biggest Among them.
Test Case 1:
input:10 5 8
output:10

Test Case 2:
input:5 10 8
output:10

Test Case 3:
input:10 10 8
output:10

Test Case 4:
input:5 10 5
output:10

Test Case 5:
input:10 10 10
output:10

Test Case 6:
input:5 8 10
output:10*/

#include<stdio.h>

void main(){
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if ((n1>=n2) && (n1>=n2)){
        printf("%d",n1);
    }
    else if((n2>=n1) && (n2>=n3)){
        printf("%d",n2);
    }else{
        printf("%d",n3);
    }
}