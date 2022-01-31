#include<iostream>
#include<stdio.h>
#include <cmath>

using namespace std;


int main(){
    long long n;
    //cin>>n;
    n=-pow(2,63);

    if(n>0){
        float k=log2(n);
        if(k>=31){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }else if(n==0){
        cout<<"Yes"<<endl;
    }else{
        float k=log2(abs(n));
        if(k>31){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}