
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>

using namespace std;   



int main(){
    int n;
    string ans="No";
    cin>>n;

    for(int i=0; i<=n/7; i++){
        if((n-7*i)%4==0){
            ans="Yes";
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}