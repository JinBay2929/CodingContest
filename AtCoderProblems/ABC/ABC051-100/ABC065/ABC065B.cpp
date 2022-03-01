
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, a, now=0, counter, ans=0;
    vector<int> as, logs;


    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        as.push_back(a-1);
    }

    //通ったボタンをもう一度踏むとループが発生していることになる。
    //なので通ったボタンのログを残して確認する
    logs.push_back(0);

    while(true){
        now=as[now];
        
        if(find(logs.begin(), logs.end(), now)==logs.end()){
            logs.push_back(now);
            ans++;
            if(now==1){
                break;
            }
        }else{
            ans=-1;
            break;
        }
    
        
        
    }

    

    

    
    
    cout<<ans<<endl;
    
    return 0;
}