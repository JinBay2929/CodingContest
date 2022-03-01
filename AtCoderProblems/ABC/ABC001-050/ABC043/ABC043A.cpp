
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    int n, ans=0;
    
    cin>>n;
    

    for(int i=1; i<=n; i++){
        ans+=i;
    }

    cout<<ans<<endl;
    
    return 0;
}