
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int x, ans, tmp;
    cin>>x;

    //floor()で切り捨て。floatで返るのでintにキャスト
    int q=(int)floor(sqrt(x));


    int max=1;
    for(int i=2; i<=q; i++){
        tmp=i;
        while(true){
            if(max<tmp){
                max=tmp;
            }
            tmp=tmp*i;
            if(tmp>x){
                break;
            }
        }
    }

    ans=max;
    
    cout<<ans<<endl;
    
    return 0;
}