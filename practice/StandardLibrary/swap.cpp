
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   


int main(){
  int n, c[100];

  cin>>n;

  for(int i=0; i<n; i++){
    cin>>c[i];
  }

  //バブルソート実装
  for(int i=0; i<n; i++){
    for(int j=n-1; j>i; j--){
      if(c[j-1]>c[j]) swap(c[j-1], c[j]);
    }
  }


  for (int i = 0; i < n; i++) cout << c[i] << endl;


  return 0;
}
    

    
    
    
    
