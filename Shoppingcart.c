#include <stdio.h>
int main()
{
    char item[100];
    char currency[1];
    float price;
    int quantity;
    float total;

    printf ("welcome to vintage valley's shopping cart\n");
    printf ("what item would you like to purchase? ");
    fgets(item, 100, stdin);

    printf("I would like to purchase item: %s\n", item);
    
    printf ("how much does the item cost?");
    scanf ("%f", &price);
    printf ("the item cost is:%.3f\n",price);
    printf ("how many items would you like to purchase?");
    scanf ("%d", &quantity);
    total = price * quantity;
    printf("You have prurchased %d %s at a cost of %.3f each\n", quantity, item, price); 
    printf ("the total cost is:%.3f\n",total);
    

}