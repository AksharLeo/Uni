/*
Read a value N, and print the multiplication table


Sample Input:
-------------
4

Sample Output:
-------------
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
4 * 7 = 28
4 * 8 = 32
4 * 9 = 36
4 * 10 = 40

*/

import java.util.Scanner


fun main(){
    val scanner= Scanner(System.`in`)
    val n = scanner.nextInt()
    for(i in 1..10){
        println("$n * $i = "+(n*i))
    }
}