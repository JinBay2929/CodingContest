
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

using ll=long long;


int n, q;
int c[100009], p[100009], l[100009], r[100009];
int sum1[100009], sum2[100009];

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>c[i]>>p[i];
  cin>>q;
  for(int i=1; i<=q; i++)cin>>l[i]>>r[i];

  //クラスごとの累積和をとる
  for(int i=0; i<=n; i++){
    sum1[i]=0;
    sum2[i]=0;
  }

  for(int i=1; i<=n; i++){
    if(c[i]==1){
      sum1[i]=sum1[i-1]+p[i];
      sum2[i]=sum2[i-1];
    }
    else{
      sum2[i]=sum2[i-1]+p[i];
      sum1[i]=sum1[i-1];
    }
  }


  for(int i=1; i<=q; i++){
    int ans1, ans2;
    ans1=sum1[r[i]]-sum1[l[i]-1];
    ans2=sum2[r[i]]-sum2[l[i]-1];

    cout<<ans1<<" "<<ans2<<endl;
  }



  return 0;
}
    
