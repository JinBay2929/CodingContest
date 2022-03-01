
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    int r;
    string ans;
    cin>>r;


    if(r<1200){
        ans="ABC";
    }else if(r<2800){
        ans="ARC";
    }else{
        ans="AGC";
    }
    
    cout<<ans<<endl;
    return 0;
}