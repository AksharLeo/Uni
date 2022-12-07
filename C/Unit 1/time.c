/*Krishna is Traveling to his home town. 
He started journey at h1 hours: m1 minutes: s1 seconds. 
The traveling time is h2 hours: m2 minutes: s2 seconds. 
WAP to find at what time he reached his hometown. 
(Time is in  hours format)

Test Case 1:
input=21 33 46
10 37 36
output=8 11 22*/

#include<stdio.h>
#include<math.h>

void main(){
    int h1,h2,m1,m2,s1,s2,h=0,m=0,s=0;
    scanf("%d%d%d",&h1,&m1,&s1);
    scanf("%d%d%d",&h2,&m2,&s2);
    if(s1+s2>=60){
        s+= (s1+s2)-60;
        m++;
    }else{
        s=(s1+s2);
    }
    if(m+m1+m2>=60){
        m+= (m1+m2)-60;
        h++;
    }else{
        m+=(m1+m2);
    }
    if(h+h1+h2>=24){
        h+=(h1+h2)-24;
    }else{
        h+=(h1+h2);
    }
    printf("%d %d %d",h,m,s);
}