import random
import os
import time
 
def clear():
    os.system("clear")
 
# Set of instructions for Rock-Paper-Scissors
def rps_instructions():
 
    print()
    print("Instructions for Rock-Paper-Scissors : ")
    print()
    print("Rock crushes Scissors")
    print("Scissors cuts Paper")
    print("Paper covers Rock")
    print()
 
# Set of instructions for Rock-Paper-Scissors-Lizard-Spock
def rpsls_instructions():
 
    print()
    print("Instructions for Rock-Paper-Scissors-Lizard-Spock : ")
    print()
    print("Scissors cuts Paper")
    print("Paper covers Rock")
    print("Rock crushes Lizard")
    print("Lizard poisons Spock")
    print("Spock smashes Scissors")
    print("Scissors decapitates Lizard")
    print("Lizard eats Paper")
    print("Paper disproves Spock")
    print("Spock vaporizes Rock")
    print("Rock crushes Scissors")
    print()
 
def rps():
     
    global rps_table
    global game_map
    global name
 
    # Game Loop for each game of Rock-Paper-Scissors
    while True:
 
        print("--------------------------------------")
        print("\t\tMenu")
        print("--------------------------------------")
        print("Enter \"help\" for instructions")
        print("Enter \"Rock\",\"Paper\",\"Scissors\" to play")
        print("Enter \"exit\" to quit")
        print("--------------------------------------")
 
        print()
 
        # Player Input
        inp = input("Enter your move : ")
 
        if inp.lower() == "help":
            clear()
            rps_instructions()
            continue
        elif inp.lower() == "exit":
            clear()
            break  
        elif inp.lower() == "rock":
            player_move = 0
        elif inp.lower() == "paper":
            player_move = 1    
        elif inp.lower() == "scissors":
            player_move = 2
        else:
            clear()
            print("Wrong Input!!")
            rps_instructions()  
            continue
 
        print("Computer making a move....")
 
        print()
        time.sleep(2)
 
        # Get the computer move randomly
        comp_move = random.randint(0, 2)
 
        # Print the computer move
        print("Computer chooses ", game_map[comp_move].upper())
 
        # Find the winner of the match
        winner = rps_table[player_move][comp_move]
 
        # Declare the winner 
        if winner == player_move:
            print(name, "WINS!!!")
        elif winner == comp_move:
            print("COMPUTER WINS!!!")
        else:
            print("TIE GAME")
 
        print()
        time.sleep(2)
        clear()
 
def rpsls():
     
    global rpsls_table
    global game_map
    global name
 
    # Game Loop for each game of Rock-Paper-Scissors-Lizard-Spock
    while True:
        print("--------------------------------------")
        print("\t\tMenu")
        print("--------------------------------------")
        print("Enter \"help\" for instructions")
        print("Enter \"Rock\",\"Paper\",\"Scissors\",\"Lizard\",\"Spock\" to play")
        print("Enter \"exit\" to quit")
        print("--------------------------------------")
         
        print()
 
        # Player Input
        inp = input("Enter your move : ")
 
        if inp.lower() == "help":
            clear()
            rpsls_instructions()
            continue
        elif inp.lower() == "exit":
            clear()
            break  
        elif inp.lower() == "rock":
            player_move = 0
        elif inp.lower() == "paper":
            player_move = 1    
        elif inp.lower() == "scissors":
            player_move = 2
        elif inp.lower() == "lizard":
            player_move = 3
        elif inp.lower() == "spock":
            player_move = 4
        else:
            clear()
            print("Wrong Input!!")
            rps_instructions()  
            continue
 
 
        print("Computer making a move....")
 
        comp_move = random.randint(0, 4)
        print()
        time.sleep(2)
 
        print("Computer chooses ", game_map[comp_move].upper())
 
        winner = rpsls_table[player_move][comp_move]
        print()
        if winner == player_move:
            print(name, "WINS!!!")
        elif winner == comp_move:
            print("COMPUTER WINS!!!")
        else:
            print("TIE GAME")       
        print()
        time.sleep(2)
        clear()
 
# The main function
if __name__ == '__main__':
 
    # The mapping between moves and numbers
    game_map = {0:"rock", 1:"paper", 2:"scissors", 3:"lizard", 4:"Spock"}
 
    # Win-lose matrix for traditional game
    rps_table = [[-1, 1, 0], [1, -1, 2], [0, 2, -1]]
 
    # Win-lose matrix for new version of the game
    rpsls_table = [[-1, 1, 0, 0, 4],[1, -1, 2, 3, 1], [0, 2, -1, 2, 4], [0, 3, 2, -1, 3], [4, 1, 4, 3, -1]]
 
     
    name = input("Enter your name: ")
 
    # The GAME LOOP
    while True:
 
        # The Game Menu
        print()
        print("Let's Play!!!")
        print("Which version of Rock-Paper-Scissors?")
        print("Enter 1 to play Rock-Paper-Scissors")
        print("Enter 2 to play Rock-Paper-Scissors-Lizard-Spock")
        print("Enter 3 to quit")
        print()
 
        # Try block to handle the player choice 
        try:
            choice = int(input("Enter your choice = "))
        except ValueError:
            clear()
            print("Wrong Choice")   
            continue
 
        # Play the traditional version of the game
        if choice == 1:
            rps()
 
        # Play the new version of the game
        elif choice == 2:
            rpsls()
 
        # Quit the GAME LOOP    
        elif choice == 3:
            break
 
        # Other wrong input
        else:
            clear()
            print("Wrong choice. Read instructions carefully.")