
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, k, l, ans=0;
    vector<int> ls;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        cin>>l;
        ls.push_back(l);
    }

    sort(ls.begin(), ls.end(), greater<>());

    for(int i=0; i<k; i++){
        ans+=ls[i];
    }
    
    cout<<ans<<endl;
    return 0;
}