
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



int n, x;
int a[100009];

int main(){
  cin>>n>>x;
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  int left=1, right=n;
  while(left<right){
    int mid=(left+right)/2;
    if(a[mid]<x){
      left=mid+1;
    }else{
      right=mid;
    }
  }

  cout<<left<<endl;
   
  return 0;
}
    
