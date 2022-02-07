
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    char ans;
    string s;
    vector<char> alphabets={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
    'o','p','q','r','s','t','u','v','w','x','y','z'};
    
    bool none=1;
    cin>>s;

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    

    for(int i=0; i<26; i++){
        if(find(s.begin(), s.end(), alphabets[i])==s.end()){
            ans=alphabets[i];
            
            none=0;
            break;
        }
    }
    if(none==1){
        cout<<"None"<<endl;
    }else{
        cout<<ans<<endl;
    }

    
    
    return 0;
}