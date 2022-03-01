#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main(){
    int n, ans;
    cin>>n;
    
    if(n==1){
        ans=0;
    }else{
        ans=n-1;
    }

    cout<<ans<<endl;

    return 0;
}