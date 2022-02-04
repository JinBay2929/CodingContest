
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    string s;
    int t, ans;
    vector<int> commands(5,0);
    cin>>s>>t;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='L'){
            commands[0]++;
        }else if(s[i]=='R'){
            commands[1]++;
        }else if(s[i]=='U'){
            commands[2]++;
        }else if(s[i]=='D'){
            commands[3]++;
        }else{
            //?のとき
            commands[4]++;
        }
    }
    //上下左右のコマンドの合計数
    int lrud=abs(commands[0]-commands[1]) + abs(commands[2]-commands[3]);

    if(t==1){
        ans=lrud + commands[4];
    }else{
        //?コマンドの数によって最小値が変わる
        if(lrud - commands[4]>=0){
            ans=lrud-commands[4];
        }else{
            if((lrud-commands[4])%2==0){
                ans=0;
            }else{
                ans=1;
            }
        }
        
    }
    

    
    
    cout<<ans<<endl;

    
    return 0;
}