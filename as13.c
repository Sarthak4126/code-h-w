//Write a program to display the cube of the number upto given integer.
//Example:
//input:
//5
//output:1:1
//2:8
//3:27
//4:64
//5:125
//Explanation:
//take input from user,
//run a loop to find the cube of a number upto n terms.



#include <stdio.h>

int main() {
    int n, i;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Displaying the cube of numbers up to n terms
    for (i = 1; i <= n; i++) {
        printf("%d:%d\n", i, i * i * i);
    }

    return 0;
}
