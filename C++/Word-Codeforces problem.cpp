#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string wordextension( string& word ){
    int length=word.size();
    int upper=0;
    int lower=0;
    for ( char& c:word){
        if(isupper(c)){
            upper++;
        }
        if (islower(c)){
            lower++;
        }

    }
    if(upper>lower){
        for ( char& u : word){
            u=toupper(u);
        }

    }
    else if(lower>=upper){
        for ( char& l : word){
            l=tolower(l);
        }
    }
    return word;
}
int main(){
    string userword;
    cin>> userword;
    cout<<wordextension(userword);
    return 0;
}