#include <iostream>
using namespace std;

void stonerow(int n) {
    char stonecolor[n];
    int count = 0;

    // Read stone colors
    for (int i = 0; i < n; i++) {
        cin >> stonecolor[i];
    }

    // Count consecutive stones of the same color
    for (int x = 0; x < n - 1; x++) {
        if (stonecolor[x] == stonecolor[x + 1]) {
            count++;
        }
    }

    cout << count;
}

int main() {
    int n;
    cin >> n;
    stonerow(n);
    return 0;
}
