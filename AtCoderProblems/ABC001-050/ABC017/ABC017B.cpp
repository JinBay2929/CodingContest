#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    int i=0;
    string x;
    bool chokugo=0;

    cin>>x;

    //リストそのものをいじくると計算量が爆発する
    //なのでリストのどの部分を指すかの矢印を動かすようにする
    while(i<x.length()){
        chokugo=0;
        if(x[i]=='c'&&x[i+1]=='h'){
            i+=2;
            chokugo=1;
        }else if(x[i]=='o'){
            i++;
            chokugo=1;
        }else if(x[i]=='k'){
            i++;
            chokugo=1;
        }else if(x[i]=='u'){
            i++;
            chokugo=1;
        }
        if(chokugo==0){
            break;
        }
    }

    if(chokugo){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}