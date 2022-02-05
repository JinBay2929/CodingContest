
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, c;
    string ans="No";
    cin>>a>>b>>c;

    if(a+b==c || b+c==a || c+a==b){
        ans="Yes";
    }

    cout<<ans<<endl;
    
    return 0;
}