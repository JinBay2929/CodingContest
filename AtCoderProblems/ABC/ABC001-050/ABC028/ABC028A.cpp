
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    int n;
    string ans;
    cin>>n;

    if(n<=59){
        ans="Bad";
    }else if(60<=n && n<=89){
        ans="Good";
    }else if(90<=n && n<=99){
        ans="Great";
    }else{
        ans="Perfect";
    }


    cout<<ans<<endl;


    
    return 0;
}