#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;    
int main(){
    int n, x;
    //xl…xを二進数表記したリスト
    //a…物の値段リスト
    vector<int> xl(20,0), a(20,0);
    cin>>n>>x;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<endl;
    // }

    int j=0;
    while(x>0){
        xl[j]=x%2;
        j++;
        x=x/2;
    }
    
    
    int sum=0;
    for(int i=0; i<xl.size(); i++){
        sum+=a[i]*xl[i];
        
    }
    

    cout<<sum<<endl;

    return 0;
}