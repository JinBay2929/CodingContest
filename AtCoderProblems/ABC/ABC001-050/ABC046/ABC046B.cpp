
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, k;
    long long ans;
    cin>>n>>k;

    ans=k*pow(k-1, n-1);


    cout<<ans<<endl;
    
    return 0;
}