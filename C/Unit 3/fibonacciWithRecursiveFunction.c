#include<stdio.h>

int fibonacci(int);

void main()
{
    int n, i = 0, j = 1, fib;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        printf("%d ",fibonacci(i));
}

int fibonacci(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}