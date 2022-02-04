
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<iomanip>



using namespace std;   

int main(){
    //チェック用文字列checks, 有効なパスワードの集まりwords
    string s, checks;
    vector<string> words;
    int k, ans=0;

    cin>>s>>k;

    if(k>s.length()){
        ans=0;
    }else{
        for(int i=0; i<=s.length()-k; i++){
            checks=s.substr(i, k);
            if(find(words.begin(), words.end(), checks)==words.end()){
                words.push_back(checks);
            }
        }
        ans=words.size();
    }
    
    cout<<ans<<endl;

    
    return 0;
}