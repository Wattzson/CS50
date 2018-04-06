#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Return an error if user does not use correct amount of command line arguments
    if (argc != 2)
    {
        printf("You must run the program with an argument that is a non-negative integer");
        return 1;
    }
    //  Convert user input from char to int
    int k = atoi(argv[1]);
    // Return an error if user did not provide a positive int
    if (k <= 0)
    {
        printf("You must run the program with an argument that is a non-negative integer");
        return 1;
    }
    // Prompt user for plain text string
    string plaintext = get_string("plaintext: ");
    // Creating a char array equal to the length of the user's plain text string
    char encodetext[strlen(plaintext)];
    // Loop through plain text, encoding when neccessary and storing into char array
    for (int i = 0, n = strlen(plaintext); i <= n; i++)
    {
        if isalpha(plaintext[i])
        {
            if isupper(plaintext[i])
            {
                encodetext[i] = (((plaintext[i] + k) - 'A') % 26) + 'A';
            }
            if islower(plaintext[i])
            {
                encodetext[i] = (((plaintext[i] + k) - 'a') % 26) + 'a';
            }
        }
        else
        {
            encodetext[i] = plaintext[i];
        }
    }
    // typecast char array to string
    string ciphertext = (string)encodetext;
    // print string
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}