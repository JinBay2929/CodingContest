
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
using namespace std;   

std::vector<std::vector<long long>> comb(int n, int r) {
  std::vector<std::vector<long long>> v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}


int n;
double p;

double ans=0;

int main(){
  cin>>n>>p;

  

  if(n%2==0){
    vector<vector<long long> > c=comb(n, n/2);

    double p1=p/100, p2=1-p1;
    for(int i=0; i<=n/2; i++){
      float prob=c[n][i] * pow(p1, i) * pow(p2, n-i);
      ans+=prob;
    }
  }
  else{
    vector<vector<long long> > c=comb(n, n/2);

    double p1=p/100, p2=1-p1;

    cout<<p2<<endl;
    for(int i=0; i<=n/2; i++){
      double prob=c[n-i][i] * pow(p1, i) * pow(p2, n-2*i);

      cout<<prob*(n-i)<<endl;
      ans+=prob*(n-i);
    }

    ans+=pow(p1, n/2+1)*(n/2+1);
  }
  
  

  cout<<ans<<endl;

  return 0;
}
    
