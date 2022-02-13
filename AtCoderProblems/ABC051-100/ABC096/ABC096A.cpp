
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

    ans=a-1;
    if(b>=a){
        ans+=1;
    }
    cout<<ans<<endl;
    
    return 0;
}