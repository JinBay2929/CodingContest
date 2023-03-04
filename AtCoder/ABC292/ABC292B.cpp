
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



int n, q;
int a, x;
int c[109];


int main(){
  cin>>n>>q;

  for(int i=1; i<=q; i++){
    cin>>a>>x;

    if(a==1){
      c[x]++;
    }
    else if(a==2){
      c[x]+=2;
    }
    else if(a==3){
      if(c[x]>=2){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }

  }



  
}
    
