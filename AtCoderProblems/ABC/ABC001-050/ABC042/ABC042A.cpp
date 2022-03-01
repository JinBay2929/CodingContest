
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    int a, b, c;
    string ans="NO";
    cin>>a>>b>>c;
    

    if(a==5){
        if((b==5&&c==7)||(b==7&&c==5)){
            ans="YES";
        }
    }else if(a==7){
        if(b==5&&c==5){
            ans="YES";
        }
    }


    cout<<ans<<endl;
    
    return 0;
}