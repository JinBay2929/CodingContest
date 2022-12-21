
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


int n, ans=0, current=0;
int l[300009], r[300009];
vector<pair<int, int> > tmp;


int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
    cin>>l[i]>>r[i];
    //律儀にl.rの順にpairを作らなくていい。ソートしやすいので。
    tmp.push_back(make_pair(r[i], l[i]));
  }

  //終了時刻が早い順にソート
  sort(tmp.begin(), tmp.end());

  //もし現在時刻が、終了時刻がはやめの映画の開始時刻の手前ならば
  //現在時刻をその映画の終了時間にシフトして映画数を＋１する。
  for(int i=0; i<n; i++){
    if(current<=tmp[i].second){
      current=tmp[i].first;
      ans++;
    }
  }


  cout<<ans<<endl;

  
  

  return 0;
}
    
