#include <iostream>
#include <vector>
//http://codeforces.com/contest/677/problem/A 
using namespace std;
int calculatewidth(int numfriends , int fenceheight){

    vector<int> friends(numfriends) ; // vector is used here to dynamically allocate array so that we dont have to rely on user for array sizing
    int width=0;
   for (int i=0;i<numfriends;i++){
    cout<<"Enter Height of friend"<<(i+1)<<":";
    cin>>friends[i];
   }
    for (int i=0;i<numfriends;i++){
        if(friends[i]>=fenceheight){
            width+=2;
        }
        else{
            width+=1;
        }  
    }
    return width;
};

int main(){
    int numfriends;
    int fenceheight;


    cout<< "ENTER NUMBER OF FRIENDS : "<<endl;
    cin>> numfriends;
    cout<<"HEIGHT OF FENCE : "<<endl;
    cin>> fenceheight;


    int netwidth=calculatewidth(numfriends,fenceheight);
    cout <<"WIDTH REQUIRED OF PATH IS :" << netwidth <<endl;


    return 0;


}
