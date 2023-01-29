/*Declare an integer Array(Array size<=20).
Input N. Input N values.
Input an element to be deleted.
Display Values of Array after deletion.

TC1:
input=5
65 21 88 39 45
88
output=65 21 39 45

TC2:
input=8
10 25 46 78 20 19 65 38
10
output=25 46 78 20 19 65 38

TC3:
input=8
10 25 46 78 20 19 65 38
38
output=10 25 46 78 20 19 65

TC4:
input=8
10 25 46 78 20 19 65 38
100
output=Not Existing
*/

#include<stdio.h>

void main(){
    int arr[20], N, i, element, index = -1;

    scanf("%d", &N);

    for(i = 0; i < N; i++) 
        scanf("%d", &arr[i]);

    scanf("%d", &element);

    for(i = 0; i < N; i++) 
        if(arr[i] == element) index = i;
    
    if(index == -1) printf("Not Existing");
    else{
        N--;
        
        for(i = index; i < N; i++)
            arr[i] = arr[i + 1];
    
        for(i = 0; i < N; i++) 
            printf("%d ", arr[i]);
    }

}