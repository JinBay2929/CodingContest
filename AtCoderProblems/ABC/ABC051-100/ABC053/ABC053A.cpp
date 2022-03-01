
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int x;
    string ans;

    cin>>x;

    if(x<1200){
        ans="ABC";
    }else{
        ans="ARC";
    }
    cout<<ans<<endl;


    
    return 0;
}