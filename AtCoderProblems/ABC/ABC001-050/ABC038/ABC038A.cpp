
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    string s, ans;
    cin>>s;


    if(s[s.length()-1]=='T'){
        ans="YES";
    }else{
        ans="NO";
    }
    
    cout<<ans<<endl;
    
    return 0;
}