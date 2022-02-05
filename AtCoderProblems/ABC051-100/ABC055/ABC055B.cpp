
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n;
    long long power=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        power*=i;
        if(power>1000000007){
            power = power%1000000007;
        }
    }
    
    cout<<power<<endl;
    

    
    return 0;
}