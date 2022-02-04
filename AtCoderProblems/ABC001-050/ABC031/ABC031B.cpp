
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<iomanip>



using namespace std;   

int main(){
    int l, h, n, a, ans;
    
    cin>>l>>h>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a>h){
            ans=-1;
        }else if(l<=a && a<=h){
            ans=0;
        }else{
            ans=l-a;
        }
        cout<<ans<<endl;
    }
    
    
    

    
    return 0;
}