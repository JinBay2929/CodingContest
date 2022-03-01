
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   



int main(){
  int a, b, c, ans;
  vector<int> nums;
  cin>>a>>b>>c;

  nums.push_back(a);
  nums.push_back(b);
  nums.push_back(c);

  sort(nums.begin(), nums.end());

  //next_permutationを使う。これで全探索がすっきりする
  ans=0;
  do{
    int tmp=(nums[0]*10+nums[1])+nums[2];
    ans=max(ans, tmp);
  }while(next_permutation(nums.begin(), nums.end()));


  cout<<ans<<endl;
  return 0;
}
    

    
    
    
    
