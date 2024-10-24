#include <stdio.h>

int add(int i, int j) { return (i + j); }
int subtract(int i, int j) { return (i - j); }
int multiply(int i, int j) { return (i * j); }

float divide(int i, int j) {
    if (j == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return ((float)i / j);
}

int square(int num) { return num * num; }
int cube(int num) { return num * num * num; }

float inverse(int num) {
    if (num == 0) {
        printf("Inverse not possible for 0.\n");
        return 0;
    }
    return 1.0 / num;
}

int main() {
    int a, b;
    char operation;
    char confirm = 'n';

    do {
        printf("\nChoose an operation (+, -, *, /, ^, #, i):\n");
        scanf(" %c", &operation);

        switch (operation) {
            case '+':
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", add(a, b));
                break;
            case '-':
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", subtract(a, b));
                break;
            case '*':
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", multiply(a, b));
                break;
            case '/':
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %.2f\n", divide(a, b));
                break;
            case '^':
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Square: %d\n", square(a));
                break;
            case '#':
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Cube: %d\n", cube(a));
                break;
            case 'i':
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Inverse: %.2f\n", inverse(a));
                break;
            default:
                printf("Invalid operation. Try again.\n");
        }

        printf("Perform another operation? [y/N]: ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');

    return 0;
}

