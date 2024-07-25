#include <iostream>
using namespace std;

void gameofcards(int cards[], int n) {
    int sarejacount = 0;
    int Dimacount = 0;
    int left = 0; // Left pointer
    int right = n - 1; // Right pointer
    bool serejaTurn = true; // Flag to track whose turn it is

    while (left <= right) {
        if (cards[left] >= cards[right]) {
            // Sereja's turn
            if (serejaTurn) {
                sarejacount += cards[left];
            } else {
                Dimacount += cards[left];
            }
            left++;
        } else {
            // Sereja's turn
            if (serejaTurn) {
                sarejacount += cards[right];
            } else {
                Dimacount += cards[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn; // Toggle turn after each pick
    }

    // Output the scores
    cout << sarejacount << " " << Dimacount << endl;
}

int main() {
    int n;
    cin >> n;
    int cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    gameofcards(cards, n);
    return 0;
}
