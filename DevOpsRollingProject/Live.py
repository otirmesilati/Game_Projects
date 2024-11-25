
def wlecome(name):
    # print according to the name variable
    print(f"Hello {name} and welcome to the World of Games(WoG).\nHere you can find many cool games to play. ")

def load_game():
    
    valid_input = True
    while(valid_input):
        print("1. Memory Game - a sequence of numbers will appear for 1 second and you have to guess it back")
        print("2. Guess Game - guess a number and see if you chose like the computer")
        print("3. Currently Roulette - try and guess the value of a random amount of USD in ILS")
        game_choice = int(input("Please choose a game to play:"))
        if(1 <= valid_input <= 3):
            valid_input = False
        else:
            print("Invalid choice, please try again")

    difficulty_choice = input("Please choose a game difficulty:")
    


