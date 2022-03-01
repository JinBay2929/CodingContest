
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string n, ans="No";
    cin>>n;

    if(n[0]=='9' || n[1]=='9'){
        ans="Yes";
    }

    cout<<ans<<endl;
    
    return 0;
}