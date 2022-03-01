
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, ans;
    cin>>n;
    int rn=(int)sqrt(n);

    for(int i=rn; i>=1; i--){
        if(rn*rn<=n){
            ans=rn * rn;
            break;
        }
    }
    cout<<ans<<endl;

    
    return 0;
}