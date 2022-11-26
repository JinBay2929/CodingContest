
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


int main(){

  int d, n, l[100009], r[100009], delta[100009],sum[100009];
  cin>>d;
  cin>>n;

  for(int i=1; i<=n; i++){
    cin>>l[i]>>r[i];
  }

  //人数の増加、減少を記録する配列delta
  for(int i=1; i<=d; i++)delta[i]=0;
  for(int i=1; i<=n; i++){
    delta[l[i]]+=1;
    delta[r[i]+1]-=1;
  }

  sum[0]=0;
  for(int i=1; i<=d; i++){
    sum[i]=sum[i-1]+delta[i];
  }

  for(int i=1; i<=d; i++){
    cout<<sum[i]<<endl;
  }

  return 0;
}
    

    
    
    
    
