
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, ans;
    cin>>a>>b;

    ans=a+b;
    if(a-b>ans){
        ans=a-b;
    }
    if(a*b>ans){
        ans=a*b;
    }
    
    cout<<ans<<endl;
    
    return 0;
}