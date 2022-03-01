
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    //初期地点の左右で関所が何個あるかをカウントすればいい
    int n, m, x, a, lef=0, rig=0, ans;
    cin>>n>>m>>x;

    for(int i=0; i<m; i++){
        cin>>a;
        if(a<x){
            lef++;
        }else if(a>x){
            rig++;
        }
    }

    ans=min(lef, rig);
    

    cout<<ans<<endl;
    
    
    return 0;
}