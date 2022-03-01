
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

    ans=a+b;
    if(ans>a+c){
        ans=a+c;
    }
    if(ans>b+c){
        ans=b+c;
    }


    cout<<ans<<endl;
    
    return 0;
}