
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int n;
    string ans;

    cin>>n;

    if(n>2*log2(n)){
        ans="Yes";
    }else{
        ans="No";
    }

    
    
    cout<<ans<<endl;


    
    return 0;
}