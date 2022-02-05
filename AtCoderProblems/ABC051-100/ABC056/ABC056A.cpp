
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    char a, b, ans;
    cin>>a>>b;

    if(a=='H'){
        ans=b;
    }else{
        if(b=='H'){
            ans='D';
        }else{
            ans='H';
        }
    }


    cout<<ans<<endl;

    
    return 0;
}