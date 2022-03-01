
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

    if(a==1&&b==1){
        ans="Draw";
    }else if(a==1 && b!=1){
        ans="Alice";
    }else if(a!=1 && b==1){
        ans="Bob";
    }else if(a!=1 && b!=1){
        if(a>b){
            ans="Alice";
        }else if(a==b){
            ans="Draw";
        }else{
            ans="Bob";
        }
    }
    
    cout<<ans<<endl;


    
    return 0;
}