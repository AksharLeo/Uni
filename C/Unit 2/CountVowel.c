/*Input a string S(Max length should be 20 characters).
count vowels i the given string.
Display count.

TC1:
input=Hello
output=2

TC2:
input=Orange
output=3

TC3:
input:Not an Ordinary Pgm
output=5*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],vowels[11]={'a','e','i','o','u','A','E','I','O','U'};
    int i,j,vowel_count=0;
    scanf("%[^\n]s",str);
    
    for(i=0;str[i]!='\0';i++){
        for(j=0;j<10;j++){
            if(str[i] == vowels[j]){
                vowel_count++;
                break;
            }
        }
    }
    printf("%d",vowel_count);
}