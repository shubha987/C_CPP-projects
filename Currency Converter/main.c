#include<stdio.h>

float converter();

int main() {
    char currency1, currency2, c;

start:
    printf("----------------Welcome to Currency Converter Application-----------------\n");
    printf("*****************please follow below instruction*****************\n");
    printf("You can have currencies dollar, rupees, euro, pound\n");
    printf("you have to type a, b, c, d respectively for dollar, rupees, euro, pound\n");

    printf("Enter currency one which you want to convert\n");
    printf("Enter currency two in which you want to convert\n");

agains:
    printf("Please press s to convert currency\n");
    scanf(" %c", &c);

    if (c == 's' || c == 'S') {
        float finalvalue = converter();
        printf("Result is %.2f\n", finalvalue);

again:
        printf("Do you want to use application again y or n?\n");
        scanf(" %c", &c);

        if (c == 'y' || c == 'Y') {
            goto start;
        } else if (c == 'n' || c == 'N') {
            printf("Thank you for using this application\n");
        } else {
            printf("Please press the correct value\n");
            goto again;
        }
    } else {
        printf("Please press the correct value\n");
        goto agains;
    }

    return 0;
}

float converter() {
    char currency1, currency2;
    float currencyval1, currencyval2;

currencyval:
    printf("enter currency name 1\n");
    printf("(a)dollar (b)rupees (c)euro (d)pound\n");
    scanf(" %c", &currency1);

    printf("enter currency value 1\n");
    scanf("%f", &currencyval1);

    switch (currency1) {
        case 'a': {
        current1:
            printf("enter currency 2 name\n");
            printf("(a)dollar (b)rupees (c)euro (d)pound\n");
            scanf(" %c", &currency2);

            if (currency2 == 'a')
                currencyval2 = currencyval1 * 1;
            else if (currency2 == 'b')
                currencyval2 = currencyval1 * 73.84;
            else if (currency2 == 'c')
                currencyval2 = currencyval1 * 0.85;
            else if (currency2 == 'd')
                currencyval2 = currencyval1 * 0.72;
            else {
                printf("Please press the correct value\n");
                goto current1;
            }
            break;
        }

        default: {
            printf("Please press the correct value\n");
            goto currencyval;
        }
        break;
    }
    return currencyval2;
}
