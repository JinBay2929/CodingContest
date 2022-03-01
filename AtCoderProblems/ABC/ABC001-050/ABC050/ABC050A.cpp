
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int a, b, ans;
    char op;
    cin>>a>>op>>b;

    if(op=='+'){
        ans=a+b;
    }else{
        ans=a-b;
    }

    cout<<ans<<endl;
    
    
    return 0;
}