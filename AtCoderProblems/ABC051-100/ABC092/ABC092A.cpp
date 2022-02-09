
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int ans=min(a, b)+min(c, d);

    cout<<ans<<endl;
    
    return 0;
}