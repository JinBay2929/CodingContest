
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string s, ans="No";
    int sum=0;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        int num=(int)(s[i]-'0');
        sum+=num;
    }
    int is=stoi(s);
    if(is%sum==0){
        ans="Yes";
    }

    cout<<ans<<endl;

    
    return 0;
}