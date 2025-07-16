import random

def get_choice():
  player_choice= input("Enter a choice-rock,paper,scissors): ")
  random_choice=["rock","paper","scissors"]
  computer_choice= random.choice(random_choice)
  choice={"player":player_choice, "computer":computer_choice}

  return choice

 
def check_win(player,computer):
  print(f"You chose {player} and computer chose {computer}")

  if(computer==player):
    return "It's a tie"
  elif computer=="rock":
    if player=="scissors":
      return "Rock smashes scissors, You lose."
    else:
      return "Paper folds rock, You Win!"
  elif computer=="paper":
    if player=="rock":
      return "paper folds rock, you lose"
    else:
      return "scissors cuts paper, You Win!"  
  elif computer=="scissors":
    if player=="paper":
      return "scissors cuts paper, You lose."
    else: 
      return "Rock smashes scissors, You Win!"
      
choices=get_choice()

result= check_win(choices["player"],choices["computer"])
print(result)


