#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;



int main(){
    int n, ans;
    cin>>n;

    if(n%2==0){
        ans=n/2;
    }else{
        ans=n/2+1;
    }

    cout<<ans<<endl;
    
    
    return 0;
}