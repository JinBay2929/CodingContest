
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int x, a, b, ans;
    cin>>x>>a>>b;

    int num=(x-a)/b;

    ans=x-a-b*num;

    cout<<ans<<endl;
    return 0;
}