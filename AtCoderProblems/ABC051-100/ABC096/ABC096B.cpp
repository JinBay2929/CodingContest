
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, c, k, ans;
    vector<int> nums;
    cin>>a>>b>>c>>k;

    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);

    sort(nums.begin(), nums.end(), greater<>());
    
    ans=nums[0]*pow(2, k) + nums[1] + nums[2];
    
    cout<<ans<<endl;
    
    return 0;
}