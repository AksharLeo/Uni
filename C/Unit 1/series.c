/*The Event Organizing Company "Buzzcraft" focuses event management 
in a way that creates a win-win situation for all involved stakeholders. 
Buzzcraft don't look at building one time associations with clients, instead, 
aim at creating long-lasting collaborations that will span years to come. 
This goal of the company has helped them evolve and expand big with more 
workforces within notable time. 
The number of employees of the company from the start day of their journey 
till now is recorded sensibly and is seemed to have followed 
a specific series like: 20, 60, 104, 152, 204,…….
Write a program which takes an integer N as the input and 
will output the series till the Nth term.

Test Case 1:
Sample Input:5
Sample Output:20 60 104 152 204

Test Case 2:
Sample Input:10
Sample Output:20 60 104 152 204 260 320 384 452 524*/

#include<stdio.h>

void main(){
    int n,x=40,y=20;
    scanf("%d",&n);
    while(n>0){
        printf("%d ",y);
        y+=x;
        x+=4;
        n--;
    }
}