def BlackSquare():
    An = list(map(int, input().strip().split()))
    moves = input().strip()
    netcalories = 0
    for i in range(len(moves)):
        calorie = int(moves[i]) - 1  # Subtract 1 because 'moves' likely represents 1-based indexing
        netcalories += An[calorie]
    print(netcalories)

BlackSquare()
