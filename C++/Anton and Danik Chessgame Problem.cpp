#include <iostream>
#include <vector>
//http://codeforces.com/contest/734/problem/A

using namespace std;

string chessgame(int ngames){
    vector<char> games(ngames);
    for(int i=0; i<ngames;i++){
        cin>>games[i];
    }
    int Anton=0;
    int Danik=0;


    for (char game : games){

        if(game == 'A'){
            Anton++;
        }
        else if(game =='D'){
            Danik++;
        }
    }
    if(Danik>Anton){
        return "Danik";
    }
    else if(Anton>Danik){
        return "Anton";
    }
    else {
        return "Friendship";
    }
    
};
int main(){
    int ngames;
    cin>>ngames;
    cout<<chessgame(ngames)<<endl;
    return 0;

}
