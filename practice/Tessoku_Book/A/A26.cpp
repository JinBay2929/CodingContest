
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

int q, x[10009];
bool deleted[300009];

int main(){
  cin>>q;
  for(int i=1; i<=q; i++)cin>>x[i];
  for(int i=2; i<=300000; i++)deleted[i]=false;

  for(int i=2; i*i<=300000; i++){
    if(deleted[i]==true)continue;
    //エラトステネス。例えば31は素数だが62以降を消したいので
    //j=i*2からスタートになる。
    for(int j=i*2; j<=300000; j+=i){
      deleted[j]=true;
    }
  }

  for(int i=1; i<=q; i++){
    if(deleted[x[i]]==true)cout<<"No"<<endl;
    else{
      cout<<"Yes"<<endl;
    }
  }

  return 0;
}
    
