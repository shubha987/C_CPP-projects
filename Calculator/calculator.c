#include <stdio.h>
#include <stdlib.h>

int addition() {
    int total = 0;
    char choice;
    do {
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        total += a;
        printf("Do you want to add more numbers [Y/N]: ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return total;
}

int multiplication() {
    int total = 1;
    char choice;
    do {
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        total *= a;
        printf("Do you want to multiply more numbers [Y/N]: ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return total;
}

int subtraction() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return abs(a - b); // Absolute difference
}

int division() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int modulo() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Error! Modulo by zero is not allowed.\n");
        return 0;
    }
    return a % b;
}

int main() {
    char value, again;
    do {
        printf("------------------------Welcome to Our Calculator Application------------------------\n");
        printf("**************************Please Follow the Instructions**************************\n");
        printf("1) Press 'a' for addition\n");
        printf("2) Press 's' for subtraction\n");
        printf("3) Press 'm' for multiplication\n");
        printf("4) Press 'd' for division\n");
        printf("5) Press 'o' for modulo\n");
        scanf(" %c", &value);

        switch (value) {
            case 'a':
            case 'A': {
                int addValue = addition();
                printf("Addition is %d\n", addValue);
                break;
            }
            case 's':
            case 'S': {
                int subValue = subtraction();
                printf("Subtraction is %d\n", subValue);
                break;
            }
            case 'm':
            case 'M': {
                int mulValue = multiplication();
                printf("Multiplication is %d\n", mulValue);
                break;
            }
            case 'd':
            case 'D': {
                int divValue = division();
                printf("Division is %d\n", divValue);
                break;
            }
            case 'o':
            case 'O': {
                int modValue = modulo();
                printf("Modulo is %d\n", modValue);
                break;
            }
            default:
                printf("You have entered a wrong input. Please enter again.\n");
        }

        printf("Do you want to use our application again [Y/N]: ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    printf("Thank you for using our application!\n");

    return 0;
}
