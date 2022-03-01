
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, c, d, ans;
    cin>>a>>b>>c>>d;

    if(a<=c){
        if(b<=c){
            ans=0;
        }else{
            ans=min(d-c, b-c);
        }
    }else{
        if(d<=a){
            ans=0;
        }else{
            ans=min(b-a, d-a);
        }
    }
    

    
    cout<<ans<<endl;
    return 0;
}