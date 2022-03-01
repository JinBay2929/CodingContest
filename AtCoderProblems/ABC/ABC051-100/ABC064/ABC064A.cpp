
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string r, g, b, rgb, ans;
   

    cin>>r>>g>>b;

    rgb=r+g+b;
    int irgb = stoi(rgb);

    if(irgb%4==0){
        ans="YES";
    }else{
        ans="NO";
    }
    
    cout<<ans<<endl;
    
    return 0;
}