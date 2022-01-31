#include<iostream>
#include<string>

using namespace std;


int main(){
    string s;
    int m, num;
    while(true){
        cin>>s;
        
        if(s=="-"){break;}
        cin>>m;
        for(int i=0; i<m; i++){
            cin>>num;
            //stringの一部をもってくる関数substr
            //substr(始点、取る長さ)
            s=s.substr(num, s.length()-num)+s.substr(0, num);
           
        }
         cout<<s<<endl;
    }
        

    return 0;
}