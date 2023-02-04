
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

ll t, l, X, Y, e[1009];
int q;


int main(){
  cin>>t>>l>>X>>Y;
  cin>>q;
  for(int i=1; i<=q; i++){
    cin>>e[i];
  }
  

  for(int i=1; i<=q; i++){
    //時刻e[i]での座標
    ld x=0;
    ld y=-l*sin(e[i]*2*PI / t)/2;
    ld z=(ld)l/2 - cos(e[i]*2*PI/t)*l/2;

    ld d1=sqrt((x-X)*(x-X) + (y-Y)*(y-Y));
    ld d2=z;

    ld kaku=atan2(d2, d1); 
    //長さd2すすむ間にd2下がる
    //この時の角度

    cout<<setprecision(10)<<kaku*(ld)180/PI<<endl;
  }
 
  return 0;
}
    
