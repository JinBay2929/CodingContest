
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int a, b, c, ans;
    cin>>a>>b>>c;

    if(a>b){
        ans=c/b;
    }else{
        ans=c/a;
    }

    cout<<ans<<endl;

    
    return 0;
}