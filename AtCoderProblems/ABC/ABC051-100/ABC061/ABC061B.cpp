
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, n, m;
    vector<int> ns(50,0);
    
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>a>>b;
        ns[a-1]++;
        ns[b-1]++;
    }

    for(int j=0; j<n; j++){
        cout<<ns[j]<<endl;
    }
    
    
    
 
    
    
    return 0;
}