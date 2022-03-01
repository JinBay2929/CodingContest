
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    char c, cs[2][3];
    string ans="NO";
    
    for(int i=0; i<3; i++){
        cin>>cs[0][i];
    }
    for(int i=0; i<3; i++){
        cin>>cs[1][i];
    }
    if(cs[0][0]==cs[1][2] && cs[0][1]==cs[1][1] && cs[0][2]==cs[1][0]){
        ans="YES";
    }
    cout<<ans<<endl;
    
    return 0;
}