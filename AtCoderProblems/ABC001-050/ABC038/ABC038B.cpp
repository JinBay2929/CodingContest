
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int ha, wa, hb, wb;
    string ans;
    cin>>ha>>wa>>hb>>wb;

    if(ha==hb || ha==wb || wa==hb || wa==wb){
        ans="YES";
    }else{
        ans="NO";
    }
    cout<<ans<<endl;
    
    return 0;
}