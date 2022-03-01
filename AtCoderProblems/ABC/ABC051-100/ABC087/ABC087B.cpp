#include<iostream>
#include<string>
#include<stdio.h>


using namespace std;

//素直に全通り調べる
int main(){
    int a, b, c, x, counter=0;
    
    cin>>a>>b>>c>>x;
    
    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            for(int k=0; k<=c; k++){
                if(500*i+100*j+50*k==x){
                    counter++;
                }
            }
        }
    }
    cout<<counter<<endl;
    
    return 0;
}