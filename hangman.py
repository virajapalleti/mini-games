import random

fruit_names = 'banana lemon apple orange pineapple mango grape cherry watermelon peach blueberry kiwi papaya strawberry raspberry blackberry cranberry lychee guava pomegranate dragonfruit avocado coconut grapefruit plum pear'
fruit_names=fruit_names.split(' ')
word = random.choice(fruit_names)

##print(word)

def main():
    chances = len(word) + 4
    correct_letters_guessed = []
    all_letters_guessed = []

    print('Okay now, let us start the game \nYou will now be able to view the number of letters in the secret word:' )
    print(' _' * len(word))
    print("\n(This game's based on names of fruits)")
  
    while chances!=0:
        guess = str(input(f'\nEnter a letter to guess, do rememebr you only have {chances} chances now: ').lower())
        ##print(guess)
    
        if len(guess) != 1:
            print('Invalid input, enter ONLY one letter')
            continue
        
        if guess in all_letters_guessed:
            print('You already guessed this word and thus this will not be counted')

        elif guess in word:
            chances -= 1
            correct_letters_guessed.append(guess)
            print("yay, your guess was right!")
            for i in word:
                if i in correct_letters_guessed:
                    print(i, end=' ')
                else:
                    print('_', end=" ")
            print()
        else:
           print("Sorry! that letter is not in word")
           chances -= 1

        all_letters_guessed += guess
        if all(element in correct_letters_guessed for element in word):
            print(f'\nCongratulations! You have guess the word: {word}')
            break
        
        if chances == 0:
            print(f'\nOh no, you seem to have reached your end! \n You have used up all your chances, the word was {word}')
            break

main()