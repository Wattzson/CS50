/* 
CS50 - https://cs50.harvard.edu/
2017/18 Problem Set 1 - Mario - More Comfortable

Implement a program that prints out a double half-pyramid of a specified height, per the below.

$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

Other Specifications - 
*To make things more interesting, first prompt the user for the half-pyramids' heights, a non-negative integer no greater than 23. 
(The height of the half-pyramids pictured above happens to be 4, the width of each half-pyramid 4, with an a gap of size 2 separating them.)
*If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.

--Daniel Watson 

*/

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