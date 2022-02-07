
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, c;
    string ans;

    cin>>a>>b>>c;

    if(b-a==c-b){
        ans="YES";
    }else{
        ans="NO";
    }
    cout<<ans<<endl;
    
    return 0;
}