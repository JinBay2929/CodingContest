
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, a, b, ans;
   
    cin>>n>>a>>b;

    ans=min(n*a, b);

    cout<<ans<<endl;

    
    return 0;
}