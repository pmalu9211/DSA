import time
questions ={
    "1) Who created python? ":"A",
    "2) Who is the best person in the world? ":"B",
    "3) Who discovered the earth? ": "C",
    "4) Why is the earth Flat? ":"D",
    "5) Who made the telephone? " : "DcaC"}
options = [["A) Me","B) You","C) Them","D) Her"],["A) Me","B) You","C) Them","D) Her"],["A) Me","B) You","C) Them","D) Her"],["A) Me","B) You","C) Them","D) Her"],["A) Alex","B) Hello", "C) From the other side", "D) Alexandrea Gram Bell"]]

def game():
    print("---------------------------------------------")
    print("Welcome to the QUIX !!!")
    print("---------------------------------------------")

    global score
    score = 0
    f = 0
    i = 0
    for question,ans in questions.items():
        time.sleep(1)
        print(question)
        time.sleep(1)
        print("---------------------------------------------")

        for f in range(len(options[i])):
            print(options[i][f])
            time.sleep(0.5)
        i = i + 1
        print("---------------------------------------------")
        g = ""
        while g == "":
            g = input("What is the answer ? : ")
            g = g.upper()
        time.sleep(1)
        if g == ans:
            print("---------------------------------------------")
            print("Correct answer !!!")
            print("---------------------------------------------")
            score = score + 1
        else:
            print("---------------------------------------------")
            print("Incorrest answer !!!")
            print("---------------------------------------------")
    print(" Calculating score ")
    print(".")
    time.sleep(0.8)
    print(".")
    time.sleep(0.8)
    print(".")
    time.sleep(0.8)
    print(".")
    time.sleep(0.8)
    print("total score : ",score)
game()
again ="Y"
while again == "Y":
    again = input("Do you want to play again? Y/N")
    again = again.upper()
    if again == "Y":
        game()
    elif again == "N":
        print("---------------------------------------------")
        print("Thanks for playing you scored "+str(score)+" in last game")
        print("---------------------------------------------")
    else:
        print("Kabhi tho sahi se input de diya kar bhadwe")

