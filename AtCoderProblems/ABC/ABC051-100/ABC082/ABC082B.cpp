
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string s, t, ans;
    cin>>s>>t;

    //sを辞書順最小、tを辞書順最大にして大小比較する
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<>());

    if(s<t){
        ans="Yes";
    }else{
        ans="No";
    }

    cout<<ans<<endl;

    
    return 0;
}