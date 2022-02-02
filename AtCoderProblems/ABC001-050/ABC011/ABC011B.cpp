#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;



int main(){
    string s;
    cin>>s;
    //ASCⅡのコードを活用
    if('a'<=s[0]&&s[0]<='z'){
        s[0]+='A'-'a';
    }
    cout<<s[0];

    for(int i=1; i<s.length(); i++){
        if('A'<=s[i]&&s[i]<='Z'){
            s[i]+='a'-'A';
        }
        cout<<s[i];
    }
    cout<<endl;
    
    
    
    
    return 0;
}