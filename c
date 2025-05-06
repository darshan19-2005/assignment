#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Assign addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Calculate sum using pointers
    sum = *ptr1 + *ptr2;

    // Output the result
    printf("Sum = %d\n", sum);

    return 0;
}

