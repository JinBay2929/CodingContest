
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, k, x, sum=0;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        cin>>x;
        sum+=min((k-x)*2, x*2);
    }

    cout<<sum<<endl;
    
    return 0;
}