
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, x, ans, mini=10000;
    int prices[100];
    cin>>n>>x;

    ans=n;

    for(int i=0; i<n; i++){
        cin>>prices[i];
        x-=prices[i];
        if(mini>prices[i]){
            mini=prices[i];
        }
    }

    ans+=(x/mini);
    cout<<ans<<endl;
    
    return 0;
}