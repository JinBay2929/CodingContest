
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
  string s;
  int n, counter, ans=0;

  cin>>n>>s;

  for(int i=0; i<1000; i++){
    int c[3]={i/100, (i/10)%10, i%10};

    int t=0;
    for(int j=0; j<n; j++){
      if(s[j]==('0'+c[t])){
        t++;
      }
      if(t==3){
        ans++;
        break;
      }
    }
  }

  cout<<ans<<endl;
  
  return 0;
}
    

    
    
    
    
