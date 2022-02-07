
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, l, r, ans=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>l>>r;
        ans+=(r-l+1);
    }

    cout<<ans<<endl;
    
    return 0;
}