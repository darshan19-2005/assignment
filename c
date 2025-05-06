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
#include <stdio.h>

void calculate_factorial(int *n, int *result) {
    *result = 1;
    for (int i = 1; i <= *n; i++) {
        *result *= i;
    }
}

int main() {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);

    calculate_factorial(&num, &fact);
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}

