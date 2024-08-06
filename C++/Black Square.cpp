#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to calculate the total calories burned
int BlackSquare(const vector<int>& An, const string& moves) {
    int netcalories = 0;
    for (char move : moves) {
        int calorie = move - '1'; // Convert '1', '2', '3', '4' to 0, 1, 2, 3 respectively
        netcalories += An[calorie];
    }
    return netcalories;
}

int main() {
    vector<int> An(4);
    
    // Read the calorie values for each type of move
    for (int i = 0; i < 4; ++i) {
        cin >> An[i];
    }
    
    string moves;
    cin >> moves; // Read the sequence of moves
    
    // Calculate and print the total calories burned
    int result = BlackSquare(An, moves);
    cout << result << endl;
    
    return 0;
}
