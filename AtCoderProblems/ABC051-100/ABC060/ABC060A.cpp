
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string a,b,c, ans;

    cin>>a>>b>>c;

    
    if(a[a.length()-1]==b[0] && b[b.length()-1]==c[0]){
        ans="YES";
    }else{
        ans="NO";
    }
    
    cout<<ans<<endl;
    
    
    return 0;
}