"""
without replacement: 1/3 chance of winning by staying
    Case 1: door1

    door1 = car, door2 = goat, door3 = goat
    If the player picks door1, they win (because it has the car).
    If the player picks door2 or door3, they lose.

    Case 2: door2

    door1 = goat, door2 = car, door3 = goat
    If the player picks door2, they win (because it has the car).
    If the player picks door1 or door3, they lose.

    Case 3: door3

    door1 = goat, door2 = goat, door3 = car
    If the player picks door3, they win (because it has the car).
    If the player picks door1 or door2, they lose.

with replacement: 2/3 chance of winning by switching
    Case 1: door1

    door1 = car, door2 = goat, door3 = goat
    If the player picks door1, they win by staying.
    If the player picks door2 or door3, they lose.
    If the player switches from door2 or door3 to the remaining door, they will always win, because the remaining door must be door1 (the one with the car).

    Case 2: door2

    door1 = goat, door2 = car, door3 = goat
    If the player picks door2, they win by staying.
    If the player picks door1 or door3, they lose.
    If the player switches from door1 or door3 to the remaining door, they will always win, because the remaining door must be door2 (the one with the car).

    Case 3: door3

    door1 = goat, door2 = goat, door3 = car
    If the player picks door3, they win by staying.
    If the player picks door1 or door2, they lose.
    If the player switches from door1 or door2 to the remaining door, they will always win, because the remaining door must be door3 (the one with the car).
"""

import secrets #used for random number generation
import numpy as np #used for storing contents of the doors
import matplotlib.pyplot as plt


number_of_games_won_without_replacement = 0
number_of_games_won_with_replacement = 0 

choice = 0 #this represent which door was chosen let it be between 0, 1, or 2

for i in range(100): #these 100 games are without replacement
    array = np.zeros(3)
    random_number = secrets.randbelow(3) #setting up the doors 1 = car, 0 = goat
    array[random_number] = 1

    print("Game #", i)
    choice = secrets.randbelow(3)   #picking a door
    print("Door #", choice, "has been chosen")

    if (array[choice] == 1):
        number_of_games_won_without_replacement += 1
print("\nOut of 100 games, without replacement, you won:", number_of_games_won_without_replacement)

for i in range(100): #these 100 games are with replacement
    array = np.zeros(3)
    random_number = secrets.randbelow(3)
    array[random_number] = 1

    print("Game #", i)
    choice = secrets.randbelow(3)
    print("Door #", choice, "has been chosen")

    for i in range(3):
        if(choice != i):
            print("option:", i, "remains")

    zero_indices = np.where(array == 0)[0] #np.where will return an array that contains the indices that will contain zero so [0,1,0] ---> [0,2]
    first_zero_index = None #this will store the index that contains the first 0 that is not the choice
    for idx in zero_indices:
        if idx != choice:
            first_zero_index = idx 
            break

    if first_zero_index is not None:
        array2 = np.concatenate((array[:first_zero_index], array[first_zero_index + 1:])) #now the new array will have one door removed
    else:
        array2 = array

    print("switching doors!\n")

    if(first_zero_index < choice): #adjusting the choice value if a door is removed for clarity
        choice -= 1
    
    if(choice == 0):  #the switch
        choice = 1
    elif(choice == 1): 
        choice = 0        
    if(array2[choice] == 1):
        number_of_games_won_with_replacement += 1

print("Out of 100 games, with replacement, you won:", number_of_games_won_with_replacement, "\n")

# Data for pie chart (won vs lost)
won_without_replacement = number_of_games_won_without_replacement
lost_without_replacement = 100 - won_without_replacement

won_with_replacement = number_of_games_won_with_replacement
lost_with_replacement = 100 - won_with_replacement

# Plotting the pie charts
fig, axes = plt.subplots(1, 2, figsize=(12, 6))

# Pie chart for wins without replacement
axes[0].pie([won_without_replacement, lost_without_replacement], 
            labels=['Won', 'Lost'], 
            colors=['lightgreen', 'lightcoral'], 
            autopct='%1.1f%%', 
            startangle=90)
axes[0].set_title('Without Replacement: 100 Games')

# Pie chart for wins with replacement
axes[1].pie([won_with_replacement, lost_with_replacement], 
            labels=['Won', 'Lost'], 
            colors=['lightgreen', 'lightcoral'], 
            autopct='%1.1f%%', 
            startangle=90)
axes[1].set_title('With Replacement: 100 Games')

# Show the pie charts
plt.tight_layout()
plt.show()