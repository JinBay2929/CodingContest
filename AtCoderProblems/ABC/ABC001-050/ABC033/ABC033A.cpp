
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<iomanip>



using namespace std;   

int main(){
    string n, ans;

    cin>>n;

    if(n[0]==n[1] && n[1]==n[2] && n[2]==n[3]){
        ans="SAME";
    }else{
        ans="DIFFERENT";
    }
    
    cout<<ans<<endl;

    
    return 0;
}