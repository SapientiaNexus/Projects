#include <stdio.h>
int main()
{
    float weight;
    printf("Choose a number between 1 and 2\n");
    printf(" 1 if you want to convert Kilogram to Pound\n");
    printf(" 2 if you want to convert Pound to Kilogram\n");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the weight in Kilogram: ");
        scanf("%f", &weight);
        float pound = weight * 2.20462;
        printf("%.2f Kilogram is equal to %.2f Pound\n", weight, pound);
    }
    else if (choice == 2)
    {
        printf("Enter the weight in Pound: ");
        scanf("%f", &weight);
        float kilogram = weight / 2.20462;
        printf("%.2f Pound is equal to %.2f Kilogram\n", weight, kilogram);
    }
    else
    {
        printf("Invalid choice! Please choose either 1 or 2.\n");
    }
}