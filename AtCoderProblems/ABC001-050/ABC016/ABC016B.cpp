#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    int a,b,c;
    string ans;
    cin>>a>>b>>c;

    if(c==a+b&&c==a-b){
        ans="?";
    }else if(c==a+b && c!=a-b){
        ans="+";
    }else if(c!=a+b && c==a-b){
        ans="-";
    }else{
        ans="!";
    }

    cout<<ans<<endl;
    return 0;
}