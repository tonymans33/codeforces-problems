    playerStrength, NUM_OF_DRAGONS = [int(x) for x in input().split()]

    levels = [] 
    won = True

    for i in range(NUM_OF_DRAGONS):
        levels.append([int(j) for j in input().split()])

    levels.sort()

    for i in levels:

        if (playerStrength > i[0]):
            playerStrength += i[1]
        else:
            won = False
            break

    if won:
        print("YES")
    else:
        print("NO")

