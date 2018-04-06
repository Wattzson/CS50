#include <stdio.h>
#include <cs50.h>

int main(void)
{


    // Declaring variables
    int blank;
    int hash = 2; // We start with 2 hash tags on top
    int height;


    // Prompt user for an int, loops until an acceptable int is provided
    do
    {
        height = get_int("Enter a positive int that is no greater than 23: ");
    }
    while (height < 0 || height > 23);


    // Build half-pyramid
    blank = height - hash;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= blank; j++)
        {
            printf(" ");
        }
        blank--;
        for (int h = 0; h < hash; h++)
        {
            printf("#");
        }
        hash++;
        printf("\n");
    }

}