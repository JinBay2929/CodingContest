
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, k, ans=1;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        ans=min(ans*2, ans+k);
    }
    cout<<ans<<endl;
    
    return 0;
}