#include <iostream>
using namespace std;

int policerecruits(int n) {
    int criminal = 0;
    int police = 0;
    int events[n];

    // Input events
    for (int i = 0; i < n; i++) {
        cin >> events[i];
    }

    for (int i = 0; i < n; i++) {
        if (events[i]>0) {
            police=police+events[i];
        } else if (events[i]<0) {
            if (police > 0) {
                police--;
            } else {
                criminal++;
            }
        }
    }

    return criminal;
}

int main() {
    int n;
    cin >> n;
    cout << policerecruits(n) << endl;
    return 0;
}
