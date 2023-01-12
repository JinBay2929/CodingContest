
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


int d, n;
int l[100009], r[100009];
int tmp[100009], sum[100009];

int main(){
  cin>>d;
  cin>>n;

  for(int i=1; i<=n; i++){
    cin>>l[i]>>r[i];
  }

  //参加し始める日は人数が+1になり、帰った日には-1になる。
  for(int i=1; i<=n; i++){
    tmp[l[i]]++;
    tmp[r[i]+1]--;
  }

  sum[0]=0;
  for(int i=1; i<=d; i++){
    sum[i]=sum[i-1]+tmp[i];
  }

  for(int i=1; i<=d; i++){
    cout<<sum[i]<<endl;
  }


  return 0;
}
    
