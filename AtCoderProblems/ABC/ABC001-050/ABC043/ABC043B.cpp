
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    string s, ans="";
    
    cin>>s;
    

    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            ans+="0";
        }else if(s[i]=='1'){
            ans+="1";
        }else if(s[i]=='B'){
            if(ans!=""){
                //ans.end()は最終項の一つ後ろを指している。なので１引く
                ans.erase(ans.end()-1);
            }
        }
    }

    cout<<ans<<endl;
    
    return 0;
}