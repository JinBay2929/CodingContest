
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

    for(int i=0; i<8; i++){
        if(pow(2, i)<=n && n<pow(2, i+1)){
            ans=pow(2, i);
        }
    }

    cout<<ans<<endl;

    return 0;
}