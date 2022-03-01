
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int x, y, z, ans=0;
    cin>>x>>y>>z;

    // if(((x-z*2-y)%(y+z))==0){
    //     ans=(x-z*2-y)/(y+z)+1;
    // }else{
    //     ans=((x-z*2-y)/(y+z))+1;
    // }

    ans=(x-z*2-y)/(y+z)+1;

    cout<<ans<<endl;

    
    return 0;
}