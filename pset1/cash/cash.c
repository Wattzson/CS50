#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{

    // Declaring variables
    int converted;
    int coins = 0;
    float customerChange;

    // Prompt user for change
    customerChange = get_float("Change owed: ");


    // Convert float to int for accuracy
    converted = round(customerChange * 100);


    // Counting quarters
    while (converted >= 25)
    {
        converted = converted - 25;
        coins++;
    }

    // Counting dimes
    while (converted >= 10 && converted < 25)
    {
        converted = converted - 10;
        coins++;
    }

    // Counting nickles
    while (converted >= 5 && converted < 10)
    {
        converted = converted - 5;
        coins++;
    }

    // Counting pennies
    while (converted >= 1 && converted < 5)
    {
        converted = converted - 1;
        coins++;
    }

    // Printing total coin count
    printf("%i\n", coins);

}

