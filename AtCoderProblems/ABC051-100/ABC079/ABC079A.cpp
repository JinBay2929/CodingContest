
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string s, ans;
    cin>>s;

    if(s[0]==s[1]&&s[1]==s[2]){
        ans="Yes";
    }else if(s[1]==s[2] && s[2]==s[3]){
        ans="Yes";
    }else{
        ans="No";
    }

    cout<<ans<<endl;

    
    return 0;
}