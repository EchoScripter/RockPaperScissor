# RockPaperScissor
This C++ program is a simple implementation of a rock-paper-scissors game with a computer opponent.
The game consists of a specified number of rounds (in this case, 5 rounds), and the player competes against the computer, which randomly selects rock, paper, or scissors for each round.

The program begins by taking the player's name as input and then proceeds to run the game logic for the specified number of rounds. In each round, the player is prompted to input their choice (rock, paper, or scissors), and the computer randomly selects its choice. The program then determines the winner of the round based on the traditional rock-paper-scissors rules, and points are awarded accordingly.

At the end of the game, the program announces the overall winner based on the total points earned by the player and the computer. It also provides an option for the player to choose whether they want to play another round or end the game.

The code includes error handling for invalid input, informing the player that the computer wins the round in case of an invalid character input.
The program uses the rand() function to generate random numbers for the computer's choices, and it incorporates the srand() function to seed the random number generator based on the current time.
