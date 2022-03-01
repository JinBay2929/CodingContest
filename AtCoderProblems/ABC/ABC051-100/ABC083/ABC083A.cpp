
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, c, d;
    string ans;
    cin>>a>>b>>c>>d;

    if(a+b>c+d){
        ans="Left";
    }else if(a+b==c+d){
        ans="Balanced";
    }else{
        ans="Right";
    }
    cout<<ans<<endl;

    
    return 0;
}