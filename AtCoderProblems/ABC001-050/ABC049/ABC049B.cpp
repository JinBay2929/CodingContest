
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int h, w;
    char marks[100][100];
    cin>>h>>w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>marks[i][j];
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout<<marks[i][j];
        }
        cout<<endl;
        for(int j=0; j<w; j++){
            cout<<marks[i][j];
        }
        cout<<endl;
    }
    
    
    return 0;
}