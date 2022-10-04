import random
from random import randint
import time

playerName = input("Please enter your name of player 1 ") 
playerName1 = input("Please enter your name of player 2 ") 

def diceRoll(num_sides=6):
    """Returns number between 1 and 6 (inclusive)"""
    return random.randint(1,num_sides)

def playGameOfDice(playername):
    a = int(input("Enter a score to reach to win the game : "))
    print("Hello,",playerName ,"and" ,playerName1,". Welcome to game of dice! First to " ,a,"points wins!")
    player1Score = 0
    player2Score = 0
    while player1Score != a and player2Score != a: 
        print("The current score is: ",playerName, player1Score, "," ,playerName1 ,player2Score)
        input("Please press 'Enter' to roll.")
        player1Roll = diceRoll()
        if(player1Score+ player1Roll<=a) :
          player1Score=player1Score+ player1Roll
        else:
           player1Score=player1Score
        
        print("",playerName,"'s dice rolled to.......... "+str(player1Roll)+".") 
        time.sleep(2)
        player2Roll = diceRoll()
        if(player2Score+player2Roll<=a) :
          player2Score=player2Score+ player2Roll
        else:
           player2Score=player2Score
        print("",playerName1,"'s dice rolled to.......... "+str(player2Roll)+".")
        time.sleep(2)

    if player1Score > player2Score:
        print("Hurray!!" ,playerName,"wins the game")
    elif (player1Score == player2Score):
        print("The game is Tied")
    else :
         print("Hurray!!" ,playerName1,"wins the game")
        
    if (player1Score > player2Score):
         return True
    else:
         return False
playerWins = playGameOfDice(playerName)
if(playerWins== True):
  print("") 

