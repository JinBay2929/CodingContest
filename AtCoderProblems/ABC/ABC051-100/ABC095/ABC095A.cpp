
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string s;
    int ans=700;
    cin>>s;

    for(int i=0; i<3; i++){
        if(s[i]=='o'){
            ans+=100;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}