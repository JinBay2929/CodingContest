#include<iostream>

#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;



int main(){
    int n, y, p,q,r;
    bool exist=0;
    cin>>n>>y;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            
            int k=n-i-j;  
            if(10000*i+5000*j+1000*k==y){
                p=i;
                q=j;
                r=k;
                exist=1;
            }
            
        }
    }
    if(exist){
        cout<<p<<" "<<q<<" "<<r<<endl;
    }else{
        cout<<-1<<" "<<-1<<" "<<-1<<endl;
    }


    
    return 0;
}