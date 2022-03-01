
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int lo, le, counter=0;
    string o, e, ans;

    cin>>o>>e;

    lo=o.length();
    le=e.length();

    for(int i=0; i<lo+le; i++){
        if(i%2==0){
            cout<<o[i/2];
        }else{
            cout<<e[i/2];
        }
    }
    cout<<endl;


    
    cout<<ans<<endl;
    
    return 0;
}