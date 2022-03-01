
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    int n, k, x, y, ans;
    cin>>n>>k>>x>>y;

    if(n>=k){
        ans=x*k + y*(n-k);
    }else{
        ans=x*n;
    }
    cout<<ans<<endl;
    
    return 0;
}