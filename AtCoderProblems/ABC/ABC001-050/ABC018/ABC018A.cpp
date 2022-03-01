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
        cout<<1<<endl;
        if(b>c){
            cout<<2<<endl;
            cout<<3<<endl;
        }else{
            cout<<3<<endl;
            cout<<2<<endl;
        }
    }else if(b>a&&b>c){
        if(a>c){
            cout<<2<<endl;
            cout<<1<<endl;
            cout<<3<<endl;
        }else{
            cout<<3<<endl;
            cout<<1<<endl;
            cout<<2<<endl;
        }
    }else{
        if(a>b){
            cout<<2<<endl;
            cout<<3<<endl;
            cout<<1<<endl;
        }else{
            cout<<3<<endl;
            cout<<2<<endl;
            cout<<1<<endl;
        }
    }


    return 0;
}