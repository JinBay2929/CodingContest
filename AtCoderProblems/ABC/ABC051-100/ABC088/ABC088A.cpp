
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, a;
    string ans;
    cin>>n>>a;

    int num=n%500;

    if(num<=a){
        ans="Yes";
    }else{
        ans="No";
    }

    cout<<ans<<endl;
    return 0;
}