# Tic-Tac-Toe-Game
This is one of the first projects I made when I just started programming fundamentals so it uses basic programming knowledge.

Everything is done in functions with the function name specifying its job clearly so you can just go to a specific function to understand its working.
To list some basic information:

- The turns switch between users in a simple do-while loop, 'O' and 'X' represent the two players which are switched after each turn.
- Numbers 1-9 represent each box and the box is replaced with 'X' or based based on the players turn and the box of their choice.
- system("cls") command is used to display the updated table after each turn.
- winning condition is checked after each turn which is responsible to display the message which player won and end the program.
- winning condition checks rows colums and diagonals.
- if all 9 blocks are filled but noone wins it counts as a draw. 
- all the values of the board are stored in a character array which is updated after each turn and so it is displayed in a simple format getting values from this array.
