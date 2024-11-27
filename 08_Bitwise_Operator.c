#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    printf("Bitwise AND (num1 & num2): %d\n", num1 & num2);
    printf("Bitwise OR (num1 | num2): %d\n", num1 | num2);
    printf("Bitwise XOR (num1 ^ num2): %d\n", num1 ^ num2);
    printf("Bitwise NOT (~num1): %d\n", ~num1);
    printf("Bitwise NOT (~num2): %d\n", ~num2);

    return 0;
}
