
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    string s, t, ans="No";
    string tone, ttwo;
    char tmp;
    cin>>s>>t;

    int len=s.length();

    if(s==t){
        ans="Yes";
    }
    for(int i=0; i<len-1; i++){
        tone=t.substr(0, 1);
        ttwo=t.substr(1, len-1);

        t=ttwo+tone;

        if(s==t){
            ans="Yes";
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}