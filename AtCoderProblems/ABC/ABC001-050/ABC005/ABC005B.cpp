#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){
    int n,t, min=999;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>t;
        if(t<min){min=t;}
    }

    cout<<min<<endl;

    return 0;
}