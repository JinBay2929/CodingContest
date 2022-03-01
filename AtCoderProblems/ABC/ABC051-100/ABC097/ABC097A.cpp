
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, c, d;
    string ans;
    cin>>a>>b>>c>>d;

    if(abs(a-c)<=d){
        ans="Yes";
    }else{
        if(abs(a-b)<=d && abs(b-c)<=d){
            ans="Yes";
        }else{
            ans="No";
        }
    }
    
    cout<<ans<<endl;
    
    return 0;
}