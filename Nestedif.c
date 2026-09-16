#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i=100;
    bool isstudent=true;
    bool isintern=true;
    printf("the fee of the program is 100\n");
    if (isstudent)
    {
        if (isintern)
        {
            printf("you get 15 percent discount\n");
            i=i-(i*15)/100;
        }
        else
        {
            printf("you get 10% discount\n");
            i=i-(i*10)/100;
        }
    }
    else
    {
        printf("you get 5% discount\n");
        i=i-(i*5)/100;
    }
    printf("Final amount: %d\n", i);
}
