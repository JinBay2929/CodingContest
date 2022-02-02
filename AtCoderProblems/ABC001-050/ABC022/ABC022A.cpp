#include<iostream>
#include<string>
#include<vector>


using namespace std;   


int main(){
    int n, s, t, w, a, counter=0;
    cin>>n>>s>>t>>w;

    if(s<=w&&w<=t){
        counter++;
    }

    for(int i=0; i<n-1; i++){
        cin>>a;
        w+=a;
        if(s<=w&&w<=t){
            counter++;
        }
    }

    cout<<counter<<endl;
    
    
    return 0;
}