#include <iostream>
#include <algorithm> //for sort defining function
using namespace std;

int toybox(int n){
    int cubes[n];
    for(int i=0;i<n;i++ ){
        cin>>cubes[i];
    }
    sort(cubes ,cubes+n); //cubes and cubes+n are pointers for [0,n-1] elements
    //sort  arranges in ascending order
    //use function "greater<int>()" ex: "sort(cubes ,cubes+n ,greater<int>())" for descending order or a custom function of cout a if  a>b
    for (int j=0 ; j<n;j++){
        cout<<cubes[j]<<" ";
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    toybox(n);
    return 0;
}