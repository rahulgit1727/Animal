#include<iostream>
using namespace std;
int main(){
    cout<<"enter any number between (1-5):";
    int ani;
    cin>>ani;
    switch(ani){
        case 1:
            cout<<"hey! it's me the lion."<<endl;
            break;
        case 2:
            cout<<"hey! it's me the tiger."<<endl;
            break;
        case 3:
            cout<<"hey! it's me the elephant."<<endl;
            break;
        case 4:
            cout<<"hey! it's me the fox."<<endl;
            break;
        case 5:
            cout<<"hey! it's me the  jackel."<<endl;
            break;
        default:
            cout<<"you are now in the middle of the jungle. and you can not go to your home."<<endl;
    }
    return 0;
}