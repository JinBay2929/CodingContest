
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

ll a, b, c, cc;



int main(){
  cin>>a>>b>>c;

  cc=c;
  for(int i=1; i<=b-1; i++){
    c*=cc;
  }


  if(a<c){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }


  
  return 0;
}
    
