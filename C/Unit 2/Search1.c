/*Declare an integer Array. input N.
Input N random values. 
Input Value to Search.
Display FOUND if found, NO if not.

TC1:
input=5
65 21 88 39 45
39
output=FOUND

TC2:
input=6
-25 -15 0 -36 -10 -30
10
output=NO
*/

#include<stdio.h>

void main()
{
    int N, to_search;
    scanf("%d", &N);
    int arr[N];
    
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &to_search);
    
    int flag = 0;

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == to_search)
        {
            printf("FOUND");
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("NO");

}