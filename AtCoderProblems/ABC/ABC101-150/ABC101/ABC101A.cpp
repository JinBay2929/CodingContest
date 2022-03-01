
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string s;
    int ans=0;

    cin>>s;

    for(int i=0; i<4; i++){
        if(s[i]=='+'){
            ans++;
        }else{
            ans--;
        }
    }

    cout<<ans<<endl;
    
   
    return 0;
}