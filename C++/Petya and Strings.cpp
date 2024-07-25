#include <iostream>
#include <cctype>//to use to upper an to lower function
#include<string> //to compare string by using this headers function
using namespace std;

string lowercase(string str){
    for(char&c :str){ //&c references the original character and modifies it directly without creating any copies
        c=tolower(c);
    }
    return str;

}

int main(){
    string str1;
    string str2;
    cin>> str1;
    cin>>str2;
    string lowstr1=lowercase(str1);
    string lowstr2=lowercase(str2);

    if (lowstr1>lowstr2){
        cout<< 1;
    }
    else if (lowstr2>lowstr1){
        cout<<-1;
    }
    else if(lowstr1==lowstr2){
        cout<<0;
    }
    return 0;

}