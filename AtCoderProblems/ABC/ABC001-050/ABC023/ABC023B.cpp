#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    int n, tesuu=0;
    string s, making="b";
    cin>>n>>s;

    int ls=s.length();

    while(making!=s){
        tesuu++;
        if(tesuu%3==1){
            making="a"+making+"c";
            
        }else if(tesuu%3==2){
            making="c"+making+"a";
            
        }else{
            making="b"+making+"b";
            
        }

        if(making.length()>ls){
            tesuu=-1;
            break;
        }
    }

    cout<<tesuu<<endl;


   
    
    return 0;
}