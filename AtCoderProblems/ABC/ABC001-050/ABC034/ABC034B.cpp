
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    long long n, ans;
    cin>>n;

    if(n%2==0){
        ans=n-1;
    }else{
        ans=n+1;
    }
    

    
    
    cout<<ans<<endl;

    
    return 0;
}