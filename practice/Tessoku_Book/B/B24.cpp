
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



long long n, x[100009], y[100009];
vector<pair<long long, long long>> p;

int lis(vector<int> a){
  int L[100009], len=0;
  int size=a.size();

  for(int i=0; i<size; i++){
    int pos=lower_bound(L+1 ,L+len+1, a[i])-L;

    L[pos]=a[i];

    if(pos>len)len++;
  }

  return len;
}


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>x[i]>>y[i];

  //(10,30)と(10,50)の箱があったとする。
  //sortすると(10,30)、(10,50)になるがタテ幅が同じなので当然こいつらは
  //入らない。
  //なので(10,50)⇒(10,30)の順になればlisを求めるときに差しさわりなくなる。
  //そこでmake_pairするときに-をつけてpushする。
  //後でvectorAに入れるときに-を再度つけることで大きい順に並んで出てくる。
  for(int i=1; i<=n; i++){
    p.push_back(make_pair(x[i], -y[i]));
  }

  sort(p.begin(), p.end());

  //タテ幅をsortし、横幅ついて最長増加部分列を求める。
  vector<int> A;
	for (int i = 0; i < p.size(); i++) {
		A.push_back(-p[i].second);
	}
 

  cout<<lis(A)<<endl;

 

  

  
   
  return 0;
}
    
