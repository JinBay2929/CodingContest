
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


int n, a[100009];
int nim; //nim和

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];

  nim=a[1];

  for(int i=2; i<=n; i++){
    //xorを取っていく
    nim=(nim^a[i]);
  }

  //nim和が0なら後手必勝。
  if(nim!=0)cout<<"First"<<endl;
  else cout<<"Second"<<endl;
  

  return 0;
}
    
