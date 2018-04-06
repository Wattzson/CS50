#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // Prompt user for card number
    long long int cardNumber;
    do
    {
        cardNumber = get_long_long("Number: ");
    }
    while (cardNumber < 0);

    // Variables
    int count = 0;
    long long int orgCardNumber = cardNumber;
    long long int multiplier = 1;
    long long int divider = 1;
    int sum;

    // Count number of digits
    while (cardNumber > 0)
    {
        cardNumber = cardNumber / 10;
        count++;
    }

    // Creating array to store card number based on count size
    int number[count];


    // Putting card number into array, it will be reversed
    for (int i = 0; i < count; i++)
    {
        multiplier = multiplier * 10;
        number[i] = orgCardNumber % multiplier / divider;
        divider = divider * 10;
    }

    // Creating array to hold digits that will be used to multiply
    int numbersToMultiply[count / 2];

    // Multiply every other digit by 2, starting with second to last digit and store into array
    for (int i = 1, j = 0; i < count; i += 2, j++)
    {
        numbersToMultiply[j] = number[i] * 2;
    }

    // Adding the products' digits (i.e., not the products themselves) together
    for (int i = 0; i < count / 2; i++)
    {
        if (numbersToMultiply[i] >= 10)
        {
            sum = sum + numbersToMultiply[i] / 10;
            sum = sum + numbersToMultiply[i] % 10;
        }
        else if (numbersToMultiply[i] < 10)
        {
            sum = sum + numbersToMultiply[i];
        }
    }

    // Adding the digits that did not get multplied by 2
    for (int i = 0; i < count; i += 2)
    {
        sum = sum + number[i];
    }

    // Determine card type
    if (count == 15 && sum % 10 == 0 && number[count - 1] == 3 && number[count - 2] == 4)
    {
        printf("AMEX\n");
    }
    else if (count == 15 && sum % 10 == 0 && number[count - 1] == 3 && number[count - 2] == 7)
    {
        printf("AMEX\n");
    }
    else if (count == 16 && sum % 10 == 0 && number[count - 1] == 5 && number[count - 2] >= 1 && number[count - 2] <= 5)
    {
        printf("MASTERCARD\n");
    }
    else if (count == 16 && sum % 10 == 0 && number[count - 1] == 2) // Problem set stated mastercards only start with 5 but paypal shows them also starting with 2
    {
        printf("MASTERCARD\n");
    }
    else if (count == 16 && sum % 10 == 0 && number[count - 1] == 4)
    {
        printf("VISA\n");
    }
    else if (count == 13 && sum % 10 == 0 && number[count - 1] == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}