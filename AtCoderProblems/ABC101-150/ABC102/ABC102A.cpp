
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   

//素数なら１、ちがうなら０
bool sosuucheck(int n){
    bool ans=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            ans=0;
            break;
        }
    }

    return ans;
}


int main(){
    int n, ans;
    
    
    cin>>n;

    if(n%2==0){
        ans=n;
    }else{
        ans=n*2;
    }
   

    cout<<ans<<endl;
    return 0;
}