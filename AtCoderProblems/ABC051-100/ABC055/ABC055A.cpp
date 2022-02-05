
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, x, y, time, ans;
    cin>>n;

    x=800*n;
    time=n/15;
    y=200*time;

    ans=x-y;

    cout<<ans<<endl;
    

    
    return 0;
}