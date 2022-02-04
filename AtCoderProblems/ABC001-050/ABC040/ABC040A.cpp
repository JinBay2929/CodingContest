
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    int n, x, ans;
    cin>>n>>x;

    ans=min(n-x, x-1);

    cout<<ans<<endl;
    
    return 0;
}