#include<iostream>
using namespace std;

int main(){
    cout<<"enter any number between (1-5) to know about the animal:";
    int ani;
    cin>>ani;
    if(ani>=1 && ani<=5){
        cout<<"Animal is not just a word. It is an emotion for every species. To be an animal it is not necessary to be an animal only. Anyone can be transformed into an animal for any reason for anyone."<<endl;
    }
    else{
        cout<<"you will get punishment for entering the wrong number."<<endl;
    }
    return 0;
}