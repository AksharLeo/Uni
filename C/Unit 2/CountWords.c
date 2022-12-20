/*Input a string S(Max length should be 20 characters).
Count number of words in the given string.
Display count.

TC1:
input:Rama is a good boy
output=5

TC2:
input:We are in CSM
output=4

TC3:
input=Hello
output=1*/

#include<stdio.h>
#include<string.h>

void main()
{
    char sentence[100];
    scanf("%[^\n]s",sentence);
    int i,count=1;

    for(i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' ')
            count++;
    }
    printf("%d",count);
}