
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, c;
    string ans="NO";

    cin>>a>>b>>c;

    //あまりだけ考えれば良いから、aにかける数字は0~b-1まででいいはず。
    //b以上の項はｂで割ると0にできるので。

    for(int i=0; i<b; i++){
        if((a*i)%b==c){
            ans="YES";
            break;
        }
    }

    
    
    
    cout<<ans<<endl;
    
    
    return 0;
}