
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, a, ans;
    cin>>n>>a;

    ans=pow(n, 2)-a;
    cout<<ans<<endl;
    
    return 0;
}