#include <stdio.h>
int main()
{int Fahrenheit;
int Celsius;
int kelvin;
printf("choose a number between 1 to 3\n");
printf("1 if you want to convert Fahrenheit to Celsius\n");
printf("2 if you want to convert Kelvin to Celsius\n");
printf("3 if you want to convert Fahrenheit to Kelvin\n");
int choice;
scanf("%d", &choice);
if (choice=1)
{
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * 5 / 9;
    printf("%d Fahrenheit is equal to %d Celsius\n", Fahrenheit, Celsius);
}
else if (choice=2)
{
    printf("Enter the temperature in Kelvin: ");
    scanf("%d", &kelvin);
    Celsius = kelvin - 273.15;
    printf("%d Kelvin is equal to %d Celsius\n", kelvin, Celsius);
}
else if (choice=3)
{
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);
    kelvin = (Fahrenheit - 32) * 5 / 9 + 273.15;
    printf("%d Fahrenheit is equal to %d Kelvin\n", Fahrenheit, kelvin);
}
else
{
    printf("Invalid choice! Please choose either 1, 2 or 3.\n");
}
}