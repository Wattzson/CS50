/* 
CS50 - https://cs50.harvard.edu/
2017/18 Problem Set 1 - Mario - Less Comfortable

Implement a program that prints out a half-pyramid of a specified height, per the below.

$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######

$ ./mario
Height: 3
  ##
 ###
####

Other Specifications - 
*To make things more interesting, first prompt the user for the half-pyramid’s height, a non-negative integer no greater than 23.
*If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.

--Daniel Watson 

*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int blank; // used to count white space
    int hash = 2; // We start with 2 hash tags on top
    int height; // set by user


    // Only accepts a non-negative integar no greater than 23
    do
    {
        height = get_int("Enter a positive int that is no greater than 23: ");
    }
    while (height < 0 || height > 23);


    // Build half-pyramid from the top down
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