/*Input a string(Max length 20 Characters). 
Display "Yes" if it is Palindrome String, otherwise display "No".

TC1:
input=madam
output=YES

TC2:
input=noon
output=YES

TC3:
input=Hello
output=NO*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[20];
    int i,j,len,flag=0;
    scanf("%s",str);
    len= strlen(str);
    
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            printf("NO");
            return;
        }
    }
    printf("YES");
}