#tl;dr
Implement a program that prints out a double half-pyramid of a specified height, per the below.

$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

#Background
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over two "half-pyramids" of blocks as he heads toward a flag pole. Below is a screenshot.

Super Mario Brothers

#Specification
Write, in a file called mario.c in your ~/workspace/pset1 directory, a program that recreates these half-pyramids using hashes (#) for blocks.

To make things more interesting, first prompt the user for the half-pyramids' heights, a non-negative integer no greater than 23. (The height of the half-pyramids pictured above happens to be 4, the width of each half-pyramid 4, with an a gap of size 2 separating them.)

If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.

Then, generate (with the help of printf and one or more loops) the desired half-pyramids.

Take care to left-align the bottom-left corner of the left-hand half-pyramid with the left-hand edge of your terminal window.
