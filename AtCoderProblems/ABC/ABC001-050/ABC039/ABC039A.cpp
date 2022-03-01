
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int a, b, c, ans;
    cin>>a>>b>>c;

    ans=a*b*2+a*c*2+b*c*2;

    cout<<ans<<endl;
    
    return 0;
}