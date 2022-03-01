
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, a, min=100000, max=0, ans;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(min>a){
            min=a;
        }
        if(max<a){
            max=a;
        }
    }

    ans=max-min;
    
    cout<<ans<<endl;
    
    return 0;
}