
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int w, h;
    cin>>w>>h;
    string ans;

    if(w*3==h*4){
        ans="4:3";
    }else{
        ans="16:9";
    }
    

    
    
    cout<<ans<<endl;

    
    return 0;
}