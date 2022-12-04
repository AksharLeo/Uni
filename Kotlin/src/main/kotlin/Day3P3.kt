/* 
Using for loop, read the number N,
find the sum of first N natural numbers.

Sample Input-1:
---------------
Enter N Value
5

Sample Output-1:
----------------
15


Sample Input-2:
---------------
Enter N Value
6


Sample Output-2:
----------------
21

*/

import java.util.Scanner

fun main() {
    val reader= Scanner(System.`in`)
    println("Enter N Value")
    val n=reader.nextInt()
    var sum = 0
  
    for(i in 1..n){
        sum += i     
    }

    println(sum)
}

