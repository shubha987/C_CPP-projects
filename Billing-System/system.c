#include<stdio.h>

int returnTotalBill() {
    printf("---------------------------Welcome to Online Food Order---------------------------\n");
    printf("-------------------------Please follow below instructions-------------------------\n");
    printf("Step 1 : Please press s to start your order\n");
    printf("Step 2 : You can order both veg and non-veg items\n");
    printf("Step 3 : Please press a to select veg items\n");
    printf("Step 4 : Please press b to select non-veg items\n");
    printf("Step 5 : You will get your final bill after your order\n");
start:
    char c;
    scanf("%c",&c);
    char item;
    char vegItem, nonvegItem;
    int billAmount = 0;
    char selectAgain;
    if (c == 's' || c == 'S') {
    items:
        printf("Which type of food items you want?\n");
        printf("a)veg items                     b)non-veg items\n");
        scanf(" %c", &item);
        if (item == 'a' || item == 'A') {
            printf("Please select 1,2,3,4,5 as per your choice\n");
            printf("1) Paneer butter masal  Rs.80\n");
            printf("2) Veg Fried Rice       Rs.90\n");
            printf("3) Mutter Paneer        Rs.70\n");
            printf("4) Mushroom Paratha     Rs.15\n");
            printf("5) Veg Roll             Rs.20\n");
        vegItemlist:
            scanf(" %c", &vegItem);
            if (vegItem == '1') {
                billAmount += 80;
            } else if (vegItem == '2') {
                billAmount += 90;
            } else if (vegItem == '3') {
                billAmount += 70;
            } else if (vegItem == '4') {
                billAmount += 15;
            } else if (vegItem == '5') {
                billAmount += 20;
            } else {
                printf("You have entered wrong order. Please try again!!\n");
                goto vegItemlist;
            }

            printf("Do you want to add more items[Y/N]:\n");
            scanf(" %c", &selectAgain);
            if (selectAgain == 'y' || selectAgain == 'Y') {
                goto items;
            } else {
                return billAmount;
            }
        } else if (item == 'b' || item == 'B') {
            printf("Please select 1,2,3,4,5 as per your choice\n");
            printf("1) Chicken butter masal  Rs.120\n");
            printf("2) Egg Fried Rice        Rs.90\n");
            printf("3) Chicken Kosha         Rs.80\n");
            printf("4) Chicken Roll          Rs.30\n");
            printf("5) Egg Roll              Rs.20\n");
        nonvegItemlist:
            scanf(" %c", &nonvegItem);
            if (nonvegItem == '1') {
                billAmount += 120;
            } else if (nonvegItem == '2') {
                billAmount += 90;
            } else if (nonvegItem == '3') {
                billAmount += 80;
            } else if (nonvegItem == '4') {
                billAmount += 30;
            } else if (nonvegItem == '5') {
                billAmount += 20;
            } else {
                printf("You have entered wrong order. Please try again!!\n");
                goto nonvegItemlist;
            }

            printf("Do you want to add more items[Y/N]:\n");
            scanf(" %c", &selectAgain);
            if (selectAgain == 'y' || selectAgain == 'Y') {
                goto items;
            } else {
                return billAmount;
            }
        } else {
            printf("You have entered wrong value, please try again\n");
            goto items;
        }

    } else {
        printf("You have entered wrong value. please press s\n");
        goto start;
    }

    return billAmount;
}

int main() {
    int totalBillAmount = returnTotalBill();
    printf("Your Total Bill Amount is Rs.%d\n", totalBillAmount);
    printf("Thank you for your order!\n");
    return 0;
}
