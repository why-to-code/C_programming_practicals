#include<stdio.h>

int main()
{
    int choice;
    printf("Enter 1 number \n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Jan \n");
            break;
        case 2:
            printf(" Feb \n");
            break;
        case 3:
            printf("March \n");
            break;
        case 4:
            printf("Apr \n");
            break;
        case 5:
            printf("May \n");
            break;
        case 6:
            printf(" June \n");
            break;
        case 7:
            printf(" July \n");
            break;
        case 8:
            printf(" Aug \n");
            break;
        case 9:
            printf("Sep \n");
            break;
        case 10:
            printf(" Oct \n");
            break;
        case 11:
            printf(" Nov \n");
            break;
        case 12:
            printf("Dec \n");
            break;

        default:
            printf("Invalid Input \n");
    }


    return 0;
}