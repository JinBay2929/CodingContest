
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int x, y;
    string ans;

    cin>>x>>y;

    if(y>x){
        ans="Better";
    }else{
        ans="Worse";
    }
    

    
    
    cout<<ans<<endl;

    
    return 0;
}