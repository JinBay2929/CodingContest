
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string s, ans="No";

    cin>>s;
    if(s[0]=='a'){
        if((s[1]=='b'&&s[2]=='c') || (s[1]=='c'&&s[2]=='b')){
            ans="Yes";
        }
    }else if(s[0]=='b'){
        if((s[1]=='a'&&s[2]=='c') || (s[1]=='c'&&s[2]=='a')){
            ans="Yes";
        }
    }else if(s[0]=='c'){
        if((s[1]=='b'&&s[2]=='a') || (s[1]=='a'&&s[2]=='b')){
            ans="Yes";
        }
    }

    cout<<ans<<endl;
    
    return 0;
}