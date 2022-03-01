
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, d, x, a, ans=0;
    cin>>n>>d>>x;

    for(int i=0; i<n; i++){
        int counter=1;
        int time=1;
        cin>>a;
        if(d>a){
            while(true){
                time+=a;
                if(time>d){
                    break;
                }
                counter++;
            }
           
            ans+=counter;
        }else{
            ans++;
        }
        
    }
    ans+=x;

    cout<<ans<<endl;
    
    return 0;
}