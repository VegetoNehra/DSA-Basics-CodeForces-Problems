#include <iostream>
using namespace std;

int Biggerbear(int limak , int bob){
    int years=0;
    while (limak<=bob){
        limak=limak*3;
        bob=bob*2;
        years++;
    }
    return years;

};
int main(){
    int limak;
    int bob;
    cin >> limak;
    cin >>bob;
    cout<< Biggerbear(limak,bob);
    return 0;
}