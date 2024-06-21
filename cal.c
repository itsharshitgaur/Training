#include <stdio.h>

int main() {
    int a, b, op;
    char ch;

    do {
        printf("Enter the value of a : ");
        scanf("%d", &a);
        printf("Enter the value of b : ");
        scanf("%d", &b);

        printf("Which Operation do you want to perform?\n");
        printf("Press\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Bitwise OR\n");
        printf("6. Bitwise AND\n");
        printf("7. Bitwise NOT\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Result of addition: %d\n", a + b);
                break;
            case 2:
                printf("Result of subtraction: %d\n", a - b);
                break;
            case 3:
                if (b != 0)
                    printf("Result of division: %.2f\n", (float)a / b);
                else
                    printf("Cannot divide by zero!\n");
                break;
            case 4:
                printf("Result of multiplication: %d\n", a * b);
                break;
            case 5:
                printf("Result of bitwise OR: %d\n", a | b);
                break;
            case 6:
                printf("Result of bitwise AND: %d\n", a & b);
                break;
            case 7:
                printf("Bitwise NOT of a: %d, Bitwise NOT of b: %d\n", ~a, ~b);
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
