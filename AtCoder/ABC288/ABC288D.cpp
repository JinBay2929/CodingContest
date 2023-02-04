
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
using ld=long double;
#define PI (ld)3.14159265358979

//愚直解。TLE

int n, k, q;
ll a[200009],l[200009], r[200009];

string ans="Yes";

int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }
  cin>>q;
  for(int i=1; i<=q; i++){
    cin>>l[i]>>r[i];
  }

  for(int i=1; i<=q; i++){
    ans="Yes";
    int len=r[i]-l[i]+1;

    for(int j=1; j<=len-k+1; j++){
      if(j%2==1){
        int start=l[i]+j/2;
        ll tmp=a[start];

        if(tmp!=0){
          for(int x=start; x<=start+k-1; x++){
            a[x]-=tmp;
          }
        }
        
      }
      else{
        int start=r[i]-k+1-j/2+1;
        ll tmp=a[start+k-1];

        if(tmp!=0){
          for(int x=start; x<=start+k-1; x++){
            a[x]-=tmp;
          }
        }
        
      }
      // for(int x=l[i]; x<=r[i]; x++){

      //   cout<<a[x]<<" ";
      // }
      // cout<<endl;
    }

    for(int j=l[i]; j<=r[i]; j++){
      if(a[j]!=0){
        ans="No";
        break;
      }

    }
    cout<<ans<<endl;
  }



  
  return 0;
}
    
