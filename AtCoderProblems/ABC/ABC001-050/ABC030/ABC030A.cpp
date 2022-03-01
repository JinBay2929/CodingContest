
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    string ans;
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if((double)b/a>(double)d/c){
        ans="TAKAHASHI";
    }else if((double)b/a==(double)d/c){
        ans="DRAW";
    }else{
        ans="AOKI";
    }
    
    


    cout<<ans<<endl;


    
    return 0;
}