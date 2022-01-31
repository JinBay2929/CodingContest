#include<iostream>
#include<stdio.h>
#include <vector>

using namespace std;

//初手にリストを用意しないと上手く入らない
//だがリストが大きすぎるとエラー吐かれるので正直詰み
int main(){
    int h, w, num;
    cin>>h>>w;
    //vector<vector<int> > b;
    int b[10][10];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>num;
            b[j][i]=num;
        }
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            cout<<b[i][j];
            if(j!=h-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}