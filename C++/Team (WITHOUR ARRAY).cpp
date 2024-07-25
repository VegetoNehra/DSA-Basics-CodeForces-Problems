#include <iostream>
using namespace std;

int TeamDecision(int np) {
    int problemCount = 0;

    while (np > 0) {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;

        int decision = Petya + Vasya + Tonya;

        if (decision >= 2) {
            problemCount++;
        }
        np--;
    }
    return problemCount;
}

int main() {
    int np;
    cin >> np;
    cout << TeamDecision(np);
    return 0;
}
