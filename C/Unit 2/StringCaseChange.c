/*Input a string S.
Change all lower case alphabets to uppercase and
all upper case alphabets to lower case. 
Keep special symbols, digits etc., unchanged.

TC1:
input=No1Student
output=nO1sTUDENT

TC2:
input=150$Credit
ouput=150$cREDIT*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[20];
    int i,letter;
    scanf("%s",str);
    
    for(i=0;str[i]!='\0';i++)
    {
        letter=str[i];
        if(letter>='A' && letter<='Z')
            str[i]=letter+32;
        else if(letter>='a' && letter<='a')
            str[i]=letter-32;
    }
    printf("%s",str);
    
}