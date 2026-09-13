#include <stdio.h>
int main()
{
    char item[100];
    char currency = '₹';
    float price=0.0;
    int quantity=0;
    float total=0.0;

    printf ("welcome to vintage valley's shopping cart\n");
    printf ("what item would you like to purchase? ");
    printf("I would like to purchase item: %c\n", item);
    fgets(item, 100, stdin);
    printf ("how much does the item cost?");
    scanf ("%f", &price);
    printf ("the item cost is:%.3f\n",price);
    printf ("how many items would you like to purchase?");
    scanf ("%d", &quantity);
    total = price * quantity;
    printf ("the total cost is:%.3f\n",total);
    

}