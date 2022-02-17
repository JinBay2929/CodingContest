
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b;
    string ans;
    cin>>a>>b;

    if(a>=9 || b>=9){
        ans=":(";
    }else{
        ans="Yay!";
    }

    cout<<ans<<endl;
    
   
    return 0;
}