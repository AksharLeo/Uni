/*Input a string S(Max size of string >=20).
input a Character C.
Find the position of given character(1st occurance).
If character found display position, otherwise display -1.

TC1:
input=string
i
output=4

TC2:
input=I love India
I
output=1

TC3:
input=program
e
output=-1
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[20],c;
    int i,position=-1;

    scanf("%[^\n]s",str);
    scanf(" %c",&c);

    for(i=0; str[i]!='\0' ; i++){
        if(str[i] == c){
            position = i + 1;
            break;
        }
    }
    printf("%d",position);
}