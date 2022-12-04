/*
Read a value N, and print the multiplication table
except multiplication with 8.

Sample Input:
-------------
4

Sample Output:
-------------
4 X 1 = 4
4 X 2 = 8
4 X 3 = 12
4 X 4 = 16
4 X 5 = 20
4 X 6 = 24
4 X 7 = 28
4 X 9 = 36
4 X 10 = 40

*/

import java.util.Scanner

fun main(){
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    for(i in 1..10){
        if(i!=8){
            println("$n X $i = "+(n*i))
        }
    }
}