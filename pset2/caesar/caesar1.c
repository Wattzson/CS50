/*
Wanted to try out this pset without using string.h
*/

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        if (k <= 0)
        {
            printf("You must run the program with an argument that is a non-negative integer");
            return 1;
        }
        else
        {
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");
            for ( int i = 0; plaintext[i] != '\0'; i++ )
            {
                if isalpha(plaintext[i])
                {
                    if isupper(plaintext[i])
                    {
                        printf("%c", (((plaintext[i] + k) - 'A') % 26) + 'A');
                    }
                    if islower(plaintext[i])
                    {
                        printf("%c", (((plaintext[i] + k) - 'a') % 26) + 'a');
                    }
                }
                else
                {
                    printf("%c", plaintext[i]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("You must run the program with an argument that is a non-negative integer");
        return 1;
    }
}