#include<stdio.h>

int main()
{
    int num;
    printf("Enter 1 number \n");
    scanf("%d",&num); // 3
    if( (num % 2)==0    )
    {
        // If the condition is true
        printf("Number is Even \n");  
    }
    else
    {
        // If condition is false
        printf(" Number is Odd \n");
    }
    return 0;
}