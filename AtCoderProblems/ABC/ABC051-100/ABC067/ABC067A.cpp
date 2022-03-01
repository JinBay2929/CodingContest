
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b;
    string ans="Impossible";
    cin>>a>>b;

    if(a%3==0 || b%3==0 || (a+b)%3==0){
        ans="Possible";
    }
    
    cout<<ans<<endl;
    return 0;
}