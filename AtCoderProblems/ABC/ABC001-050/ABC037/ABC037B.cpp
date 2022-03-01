
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int n, q, l, r, t;
    int a[100]={};
    cin>>n>>q;

    for(int i=0; i<q; i++){
        cin>>l>>r>>t;

        for(int j=l; j<=r; j++){
            a[j-1]=t;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    

    

    
    return 0;
}