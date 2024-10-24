#include <stdio.h>

// Function declarations
int add(int i, int j) {
    return (i + j);
}

int subtract(int i, int j) {
    return (i - j);
}

int multiply(int i, int j) {
    return (i * j);
}

float divide(int i, int j) {
    if (j == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 to indicate an error.
    }
    return ((float) i / j);  // Explicit type casting to float for decimal results.
}

// Function for square
double square(double num) {
    return num * num;
}

// Function for cube
double cube(double num) {
    return num * num * num;
}

int main() {
    int a, b;
    char operation;
    
    printf("\nChoose an operation (+, -, *, /, ^, #):\n");
    printf("+: Addition\n");
    printf("-: Subtraction\n");
    printf("*: Multiplication\n");
    printf("/: Division\n");
    printf("^: Square of a number\n");
    printf("#: Cube of a number\n");
    
    printf("Enter operation: ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("The result of %d + %d is %d\n", a, b, add(a, b));
            break;
        case '-':
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("The result of %d - %d is %d\n", a, b, subtract(a, b));
            break;
        case '*':
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("The result of %d * %d is %d\n", a, b, multiply(a, b));
            break;
        case '/':
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                printf("The result of %d / %d is %.2f\n", a, b, divide(a, b));
            }
            break;
        case '^':
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("The square of %d is %.2f\n", a, square(a));
            break;
        case '#':
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("The cube of %d is %.2f\n", a, cube(a));
            break;
        default:
            printf("Invalid operation. Please try again.\n");
    }

    return 0;
}

