
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


int n, k;
vector<char> v;

int main(){
  cin>>n;

  if(n%2==0){
    for(int i=1; i<=n/2; i++){
      v.push_back('(');
      v.push_back(')');
    }

    sort(v.begin(), v.end());

    
    do{
      int l=0, r=0;
      bool flag=true;
      for(int i=0; i<n; i++){
        if(v[i]=='(')l++;
        else r++;

        if(r>l){
          flag=false;
          break;
        }
      }

      if(flag){
        for(int i=0; i<n; i++){
          cout<<v[i];
        }
        cout<<endl;
      }
      
    }while(next_permutation(v.begin(), v.end()));
  }

  return 0;
}
    
