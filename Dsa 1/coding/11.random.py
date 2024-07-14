import random
# x = random.randint(1,10)
# print(x)
choice = ["rock","paper","scissor"]
comp = random.choice(choice)
print("Lets play rock paper scissors!! ")
print("********************************")
print("What is your choice ? : 1 for rock, 2 for paper, 3 for scissors")
player = int(input("choice :"))
print("computer chose : ",comp)

if (comp == "rock" and player == 1) or (comp == "paper" and player == 2) or (comp == "scissor" and player == 3):
    print("DRAW!!!!")
elif (comp == "rock" and player == 2) or (comp == "paper" and player == 3) or (comp == "scissor" and player == 1):
    print("YOU WON!!!!")
elif (comp == "rock" and player == 3) or (comp == "paper" and player == 1) or (comp == "scissor" and player == 2):
    print("YOU LOSE!!!!")


# cards = [1,2,3,4,5,6,7,8,9,"j","k","q"]
# print(cards)
# random.shuffle(cards)
# print(cards)
