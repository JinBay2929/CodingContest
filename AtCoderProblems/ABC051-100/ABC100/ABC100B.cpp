
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int d, n, ans;
    
    cin>>d>>n;

    if(n!=100){
        ans=n;
        for(int i=0; i<d; i++){
            ans*=100;
        }
        cout<<ans<<endl;
    }else{
        ans=101;
        for(int i=0; i<d; i++){
            ans*=100;
        }
        cout<<ans<<endl;
    }
    

    
    
   
    return 0;
}