
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int x, a, b;
    char ans;
    cin>>x>>a>>b;

    if(abs(x-a)<=abs(x-b)){
        ans='A';
    }else{
        ans='B';
    }

    
    cout<<ans<<endl;
    return 0;
}