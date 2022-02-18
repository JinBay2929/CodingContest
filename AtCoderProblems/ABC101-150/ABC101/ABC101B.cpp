
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string n, ans="No";
    int sum=0;

    cin>>n;

    for(int i=0; i<n.length(); i++){
        sum+=((int)(n[i]-'0'));
    }

    if(stoi(n)%sum==0){
        ans="Yes";
    }
    cout<<ans<<endl;
    
   
    return 0;
}