#include <iostream>
using namespace std;

int magnetsdomino(int magnum) {
    int groups = 1; // There will be at least one group if there's at least one magnet
    int previousMag;
    cin >> previousMag; // Read the first magnet

    for (int i = 1; i < magnum; ++i) {
        int currentMag;
        cin >> currentMag;

        if (currentMag != previousMag) {
            ++groups;
        }

        previousMag = currentMag;
    }

    return groups;
}

int main() {
    int n;
    cin >> n;
    cout << magnetsdomino(n);
    return 0;
}
