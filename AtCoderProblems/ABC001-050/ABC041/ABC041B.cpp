
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    long long a, b, c;
    long long ad, bd, cd;
    long long x, bunbo, ans;
    cin>>a>>b>>c;

    bunbo=1000000007;
    ad=a%bunbo;
    bd=b%bunbo;
    cd=c%bunbo;

    ans=(((ad*bd)%bunbo)*cd)%bunbo;
    


    cout<<ans<<endl;
    
    return 0;
}