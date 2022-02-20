
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    int n, a, ans;
    vector<int> nums;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        nums.push_back(a);
    }
    

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
   

    ans=nums.size();
    cout<<ans<<endl;
    return 0;
}