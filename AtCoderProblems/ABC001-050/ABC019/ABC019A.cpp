#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a>b&&a>c){
        if(b>c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }else if(b>a&&b>c){
        if(a>c){
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
    }else{
        if(a>b){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
    }


    return 0;
}