/* Using while loop, read the numbers until you encounter value 0, and 
find the sum of all the numbers you read.

Sample Input-1:
---------------
Enter the number
2 
Enter the number
3
Enter the number
4 
Enter the number
0

Sample Output-1:
----------------
The sum is 9


Sample Input-2:
---------------
Enter the number
5 
Enter the number
4
Enter the number
3 
Enter the number
2 
Enter the number
1 
Enter the number
0

Sample Output-2:
----------------
The sum is 15

*/

import java.util.Scanner

fun main() {
    val reader= Scanner(System.`in`)
    var sum = 0

    println("Enter number")
    var num=reader.nextInt()
    while(num!=0){
        sum = sum + num      
        println("Enter number")
        num=reader.nextInt()
    }

    println("The sum is "+sum)
}

