//Write a C program to input two numbers and display those numbers.//
#include <stdio.h>
int main()
 {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("You entered: %d and %d\n", num1, num2);
    return 0;
}