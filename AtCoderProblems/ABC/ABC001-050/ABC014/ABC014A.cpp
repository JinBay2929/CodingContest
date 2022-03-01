#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;    
int main(){
    int a, b, ans=0;
    cin>>a>>b;

    if(a%b!=0){
        ans=b-(a%b);
    }
    

    cout<<ans<<endl;

    return 0;
}