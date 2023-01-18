
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
long long a[100009], ans[100009];
vector<long long> va;
vector<pair<long long, int>> x;

//結論make_pairはいらなかった

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)va.push_back(a[i]);

  sort(va.begin(), va.end());
  va.erase(unique(va.begin(), va.end()), va.end());
  
  int lenva=va.size();


  for(int i=0; i<lenva; i++){
    x.push_back(make_pair(va[i], i+1)); //(数値、大きさ番目)のpair
  }

  for(int i=1; i<=n; i++){
    for(int j=0; j<lenva; j++){
      if(a[i]==x[j].first){
        ans[i]=x[j].second;
        break;
      }
    }
  }


  for(int i=1; i<=n; i++){
    cout<<ans[i];
    if(i<n)cout<<" ";
  }

  cout<<endl;


  
  
  


   
  return 0;
}
    
