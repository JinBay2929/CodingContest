#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){
    char ban[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>ban[3-i][3-j];
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j!=0){cout<<" ";}
            cout<<ban[i][j];
        }
        cout<<endl;
    }

    return 0;
}