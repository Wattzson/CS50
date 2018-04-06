#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>



int main(int argc, string argv[])
{
    // Checking for correct amount of arguments
    if (argc == 2)
    {
        string k = argv[1];
        int mod = 0;
        int key = 0;
        // Checking for alphabetical argument and also calculating modulus value
        for (int i = 0, n = strlen(k); i < n; i++)
        {
            if isalpha(k[i])
            {
                mod++;
                if isupper(k[i])
                {
                    k[i] = k[i] - 'A';
                }
                else if islower(k[i])
                {
                    k[i] = k[i] - 'a';
                }
            }
            // Throw an error if non-alphabetical argument entered
            else
            {
                printf("You must run the program with a single, alphabetical command line argument\n");
                return 1;
            }
        }
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if isalpha(plaintext[i])
            {
                // Using modulus to loop through the key
                key = key % mod;
                // Encoding using key
                if isupper(plaintext[i])
                {
                    printf("%c", (((plaintext[i] + k[key]) - 'A') % 26) + 'A');
                }
                else if islower(plaintext[i])
                {
                    printf("%c", (((plaintext[i] + k[key]) - 'a') % 26) + 'a');
                }
                // Incrementing key for next iteration
                key++;
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");

    }
    // Throw an error for incorrect amount of arguments
    else
    {
        printf("You must run the program with a single, alphabetical command line argument\n");
        return 1;
    }
}