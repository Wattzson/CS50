/* 
CS50 - https://cs50.harvard.edu/
2017/18 Problem Set 1 - Cash

Implement a program that calculates the minimum number of coins required to give a user change.

$ ./cash
Change owed: 0.41
4

Other Specifications - 
*Write a program that first asks the user how much change is owed and then spits out the 
minimum number of coins with which said change can be made.
*If the user fails to provide a non-negative value, your program should re-prompt the user 
for a valid amount again and again until the user complies.

--Daniel Watson
*/

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

