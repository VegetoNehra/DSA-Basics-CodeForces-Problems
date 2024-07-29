def main():
    # Step 1: Initialize a 5x5 matrix
    matrix = []
    x = y = 0

    # Step 2: Reading the 5x5 matrix and finding the position of 1
    print("Enter the 5x5 matrix:")
    for i in range(5):
        row = list(map(int, input().split()))
        matrix.append(row)
        for j in range(5):
            if row[j] == 1:
                x = i
                y = j

    # Step 3: Calculate the number of moves to bring 1 to the center (2, 2)
    moves = abs(x - 2) + abs(y - 2)

    # Step 4: Output the number of moves
    print(moves)

if __name__ == "__main__":
    main()
