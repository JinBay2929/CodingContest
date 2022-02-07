
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int x, t, ans;
    cin>>x>>t;

    if(x-t>0){
        ans=x-t;
    }else{
        ans=0;
    }

    cout<<ans<<endl;
    
    return 0;
}