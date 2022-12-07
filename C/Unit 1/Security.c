/*A Security Agency is recruiting a security officer. 
After all rounds of tests conducted, three applications (A, B, C) are shortlisted. 
They decided to select the tallest man among them. 
The minimum height should be greater than or equal to 5 feet 8 inches. 
Only one person can be selected. 
Input heights of A, B and C in inches, display who is selected [A/B/C/None].

Note: If more than one is eligible with same height or no one is eligible, display none.

Test Case 1
input=69 68 71
output=C

Test Case 2
input=60 70 70
output=None

Test Case 3
input=60 62 64
output=None

Test Case 4
input=60 70 68
output=B

Test Case 5
input=72 70 68
output=A*/

#include<stdio.h>

void main(){
    int A,B,C,minHeight;
    scanf("%d%d%d",&A,&B,&C);
    minHeight=68;
    
    if((A>=minHeight)||(B>=minHeight)||(C>minHeight)){
        if((A>B)&&(A>C)){
            printf("A");
        }else if((B>A)&&(B>C)){
            printf("B");
        }else if((C>A)&&(C>B)){
            printf("C");
        }else{
            printf("None");
        }
        
    }else{
        printf("None");
    }
}