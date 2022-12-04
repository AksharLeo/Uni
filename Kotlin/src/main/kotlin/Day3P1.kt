/* Using while loop, read the numbers until you encounter value 0, and
find the sum of all the numbers you read.

Sample Input-1:
---------------
Enter the numbers
2 3 4 0

Sample Output-1:
----------------
The sum is 9


Sample Input-2:
---------------
Enter the numbers
5 4 3 2 1 0

Sample Output-2:
----------------
The sum is 15

*/

import java.util.Scanner

fun main() {
    val scanner= Scanner(System.`in`)
    var sum:Int = 0

    println("Enter the numbers")

    while(true){
        var num=scanner.nextInt()
        if(num==0){
            break
        }
        else{
            sum += num
        }
    }

    println("The sum is "+sum)
}
