#include<iostream>

#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;



int main(){
    string s;
    bool able=1;
    cin>>s;

    //文字列を入れ替えてチェックする。
    //頭から取るとerase, eraserの判別ができない
    reverse(s.begin(), s.end());
    
    while(able){
        able=0;
        if(s.substr(0,7)=="remaerd"){
            s=s.substr(7, s.length()-7);
            able=1;
        }else if(s.substr(0,6)=="resare"){
            s=s.substr(6, s.length()-6);
            able=1;
        }else if(s.substr(0,5)=="maerd"){
            s=s.substr(5, s.length()-5);
            able=1;
        }else if(s.substr(0,5)=="esare"){
            s=s.substr(5, s.length()-5);
            able=1;
        }
    }

    if(s.length()==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}