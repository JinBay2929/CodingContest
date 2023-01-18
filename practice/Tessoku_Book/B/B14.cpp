
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <stack>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
#include <functional>
#include <bitset>
#include <iomanip>
using namespace std;   


int n;
long long k;
long long a[100009];
vector<long long> l1, l2;

string ans="No";


//ビット全探索。vectorを渡すと要素を組み合わせてできる値が入った
//vectorを返す
vector<long long> enumerate(vector<long long> a){
  vector<long long> sumlist;
  int len=a.size();

  for(long long i=0; i<(1<<len); i++){
    long long sum=0;

    for(int j=0; j<len; j++){
      int wari=(1<<j);
      if((i/wari)%2 == 1)sum+=a[j];
    }

    sumlist.push_back(sum);
  }

  return sumlist;
}


int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=n/2; i++){
    l1.push_back(a[i]);
  }
  for(int i=n/2; i<=n; i++){
    l2.push_back(a[i]);
  }
  
  vector<long long> Sum1 = enumerate(l1);
	vector<long long> Sum2 = enumerate(l2);
	sort(Sum1.begin(), Sum1.end());
	sort(Sum2.begin(), Sum2.end());

  int len=Sum1.size();

  for(int i=0; i<len; i++){
    auto pos=lower_bound(Sum2.begin(), Sum2.end(), k-Sum1[i]);

    //lower_boundした結果posがSum2の範囲内にいて、かつ値がk-Sum1[i]。
    if(pos<Sum2.end() && *pos==k-Sum1[i]){
      ans="Yes";
      break;
    }
  }

  cout<<ans<<endl;
  
  


   
  return 0;
}
    
