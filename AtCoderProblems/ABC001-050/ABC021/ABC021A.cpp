#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;   

//何回使ってもいいらしいので1,2のみを使う
int main(){
    int n, kazu=0;
    cin>>n;

    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0; i<n/2; i++){
            cout<<2<<endl;
        }
    }else{
        cout<<n/2+1<<endl;
        cout<<1<<endl;
        for(int i=0; i<n/2; i++){
            cout<<2<<endl;
        }
    }

    


    return 0;
}