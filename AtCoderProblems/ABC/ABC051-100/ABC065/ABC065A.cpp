
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int x, a, b;
    string ans;

    cin>>x>>a>>b;

    if(a>=b){
        ans="delicious";
    }else{
        if(b-a<=x){
            ans="safe";
        }else{
            ans="dangerous";
        }
    }

    
    
    cout<<ans<<endl;
    
    return 0;
}