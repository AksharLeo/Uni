/*Write a program to define user defined functions
for arithmetic 1.Bitwise AND, 2.Bitwise OR, 3.Bitwise EX-OR,
4.Bitwise LEFT-SHIFT and 5.Bitwise RIGHT-SHIFT.

input a,b and option(1/2/3/4/5).

test case 1:
input=1
15 20
output=4

test case 2:
input=2
15 20
output=31

test case 3:
input=3
15 20
output=27

test case 4:
input=4
15 2
output=60

test case 5:
input=5
15 2
output=3
*/

#include<stdio.h>

int bitwise_and(int a, int b)
{
    return a&b;
}

int bitwise_or(int a, int b)
{
    return a|b;
}

int bitwise_xor(int a, int b)
{
    return a^b;
}

int bitwise_left_shift(int a, int b)
{
    return a<<b;
}

int bitwise_right_shift(int a, int b)
{
    return a>>b;
}

void main()
{
    int a, b, option;
    
    scanf("%d%d%d", &option,&a,&b);
    
    switch(option)
    {
        case 1: printf("%d ", bitwise_and(a,b));
            break;
        case 2: printf("%d ", bitwise_or(a,b));
            break;
        case 3: printf("%d ", bitwise_xor(a,b));
            break;
        case 4: printf("%d ", bitwise_left_shift(a,b));
            break;
        case 5: printf("%d ", bitwise_right_shift(a,b));
            break;
        default: printf("Invalid");
    }
    
}