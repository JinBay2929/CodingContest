
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, c, ans;
    cin>>a>>b>>c;

    if(a==b){
        ans=c;
    }else{
        if(a==c){
            ans=b;
        }else{
            ans=a;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}