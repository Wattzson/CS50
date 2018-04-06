#include <stdio.h>
#include <cs50.h>

int main(void)
{


    // Declaring variables
    int blank;
    int hash = 1;
    int height;


    // Prompt user for an int, loops until an acceptable int is provided
    do
    {
        height = get_int("Enter a positive int that is no greater than 23: ");
    }
    while (height < 0 || height > 23);


    // Build half-pyramids
    blank = height - hash - 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= blank; j++)
        {
            printf(" ");
        }
        for (int h = 0; h < hash; h++)
        {
            printf("#");
        }
        blank--;
        // Printing gap between two half-pyramids
        printf(" ");
        printf(" ");
        for (int h = 0; h < hash; h++)
        {
            printf("#");
        }
        hash++;
        printf("\n");
    }

}