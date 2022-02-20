
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    int a, b;
    string ans="No";
    cin>>a>>b;

    if(a==1 || b==1){
        if(abs(a-b)==1 || abs(a-b)==9){
            ans="Yes";
        }
    }else{
        if(abs(a-b)==1){
            ans="Yes";
        }
    }
   

    cout<<ans<<endl;
    return 0;
}