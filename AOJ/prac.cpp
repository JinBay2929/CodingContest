
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, a, ans;
    vector<int> as;


    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        as.push_back(a-1);
    }

    if(find(as.begin(), as.end(), 1)==as.end()){
        ans=-1;
    }else{
        
    }

    

    
    
    cout<<ans<<endl;
    
    return 0;
}