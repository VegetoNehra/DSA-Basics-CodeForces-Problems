#include <iostream>
#include <string>

using namespace std;

void gender(string str) {
    int count = str.size();
    int x = 0;

    for (int i = 0; i < count; i++) {
        bool is_unique = true;
        for (int j = 0; j < i; j++) { // Check all previous characters
            if (str[i] == str[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            x++;
        }
    }

    int num = x;
    if ((num % 2) == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}

int main() {
    string name;
    cin >> name;
    gender(name);
    return 0;
}
