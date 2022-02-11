
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, x;
    string ans="NO";
    cin>>a>>b>>x;

    
    if(b>=x-a && x-a>=0){
        ans="YES";
    }

    cout<<ans<<endl;
    
    
    return 0;
}