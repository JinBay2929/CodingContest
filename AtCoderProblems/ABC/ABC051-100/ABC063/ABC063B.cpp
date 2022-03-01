
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string s, ans="yes";
    vector<char> chars;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(find(chars.begin(), chars.end(), s[i])==chars.end()){
            chars.push_back(s[i]);
        }else{
            ans="no";
            break;
        }
    }
    
    cout<<ans<<endl;
    
    return 0;
}