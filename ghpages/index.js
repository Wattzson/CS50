
/* 
    CS50 - https://cs50.harvard.edu/
    Problem Set 1 - Hello
    Create a program that prints "hello world".
    By: Daniel Watson 
    2018
*/
function pset1_hello() {
    document.getElementById("hello").innerHTML = "Hello, World!";
}


/* 
CS50 - https://cs50.harvard.edu/
Problem Set 1 - Mario - Less Comfortable
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

By: Daniel Watson 
2018
*/
function pset1_mario_less() {
    
    // Asks for an integer between 1-23 and doesn't stop asking until it get what it wants
    var height;
    do {
        height = prompt("Please enter a positive integer that is no greater than 23:");
    } while (height<0 || height>23);
    
    // Setup
    var mario = document.getElementById('mario_less');
    var space = '&nbsp';
    var hash = '#';
    var spaces = height - 2;
    var hashes = 2;

    // Simple loop one row at a time
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < spaces; j++)
        {
            mario.insertAdjacentHTML('beforeend', space);
        }
        for (j = 0; j < hashes; j++)
        {
            mario.insertAdjacentHTML('beforeend', hash);
        }
        mario.insertAdjacentHTML('beforeend', '<br>');
        spaces--;
        hashes++;
    }
        


    
   
}