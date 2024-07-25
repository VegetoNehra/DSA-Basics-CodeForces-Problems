#  include  <iostream>
using namespace std;

int TeamDecision(int np ){
    int problem=0;
    
    while (np>0){
        int Petya,Vasya,Tonya;
        cin>>Petya>>Vasya>>Tonya;

        int array[3]={Petya,Vasya,Tonya};
        int decision=0;
        for(int i= 0;i<3;i++){
            if(array[i]==1){

                decision++;
            }
        }
        if (decision >= 2){
            problem++;
        }
        np--;
    }
    return problem;
    
};
int main(){
    int np;
    cin>> np;
    cout<< TeamDecision(np);
    return 0;
}