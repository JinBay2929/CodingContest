
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



int n, a[100009], d, l[100009], r[100009];
int maxl[100009], maxr[100009];


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];
  cin>>d;

  for(int i=1; i<=d; i++){
    cin>>l[i]>>r[i];
  }

  //累積最大値。左からと右からバージョン
  maxl[1]=a[1];
  for(int i=2; i<=n; i++) maxl[i]=max(maxl[i-1], a[i]);
  maxr[n]=a[n];
  for(int i=n-1; i>=1; i--) maxr[i]=max(maxr[i+1], a[i]);

  for(int i=1; i<=d; i++){
    cout<<max(maxl[l[i]-1], maxr[r[i]+1])<<endl;
  }
  return 0;
}
    

    
    
    
    
