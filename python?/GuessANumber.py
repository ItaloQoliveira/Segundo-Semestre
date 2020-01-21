import random

answer=random.randint(1,50)
guess=int(input("Guess a number between 1 and 50: "))

while guess!=answer:
    if guess<answer:
        print("Try guessing higher")
    else:
        print("Try guessing lower")
    guess=int(input("try again(You can enter 0 to quit): "))
    if guess==0:
        print("Game over!")
        break
else:
    print("Great job, you did it!")
