#include <iostream>
#include <cmath>
/*You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom,
 let's index the matrix columns by numbers from 1 to 5 from left to right.
  In one move, you are allowed to apply one of the two following transformations to the matrix:
Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle 
(in the cell that is on the intersection of the third row and the third column).
 Count the minimum number of moves needed to make the matrix beautiful.*/

using namespace std;

int main() {
    int matrix[5][5]; // creating a 5*5 matrix
    int x, y;

    // Reading the 5x5 matrix and finding the position of 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j]; // taking input into the matrix
            if (matrix[i][j] == 1) {
                x = i;
                y = j; //finding the coordinates of "1"
            }
        }
    }

    // Calculating the number of moves to bring 1 to the center (2, 2) in 0-indexed matrix
    int moves = abs(x - 2) + abs(y - 2); // abs functiomn gives the absolute value

    cout << moves << endl;

    return 0;
}
