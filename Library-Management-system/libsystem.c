#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct library {
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main() {
    struct library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3) {
        printf("Enter 1 to input details like id,name,author,student,price,pages\n");
        printf("Enter 2 to display details\n");
        printf("Enter 3 to quit\n");
        scanf("%d", &input);

        switch (input) {
            case 1:
                printf("Enter book ID\n");
                scanf("%d", &lib[count].id);
                getchar(); 

                printf("Enter book name\n");
                fgets(lib[count].name, sizeof(lib[count].name), stdin);
                strtok(lib[count].name, "\n"); 
                printf("Enter Author's name\n");
                fgets(lib[count].author, sizeof(lib[count].author), stdin);
                strtok(lib[count].author, "\n"); 
                printf("Enter Student's name\n");
                fgets(lib[count].student, sizeof(lib[count].student), stdin);
                strtok(lib[count].student, "\n"); 

                printf("Enter price\n");
                scanf("%d", &lib[count].price);

                printf("Enter pages\n");
                scanf("%d", &lib[count].pages);

                count++;
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    printf("Book ID : %d\n", lib[i].id);
                    printf("Book name : %s\n", lib[i].name);
                    printf("Author's name : %s\n", lib[i].author);
                    printf("Student's name : %s\n", lib[i].student);
                    printf("Price : %d\n", lib[i].price);
                    printf("Pages : %d\n", lib[i].pages);
                }
                break;

            case 3:
                exit(0);
                break;

            default:
                printf("You have entered wrong value, Please type again\n");
                break;
        }
    }

    return 0;
}
