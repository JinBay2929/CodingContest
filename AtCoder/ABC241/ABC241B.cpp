
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>

using namespace std;   



int main() {
  int n, m, a, b;
  vector<int> as, bs;
  string ans="No";

  cin>>n>>m;


  for(int i=0; i<n; i++){
    cin>>a;
    as.push_back(a);
  }

  for(int i=0; i<m; i++){
    cin>>b;
    bs.push_back(b);
  }

  int counter=0;
  for(int i=0; i<m; i++){

    if(find(as.begin(), as.end(), bs[i])==as.end()){
      break;
    }else{
      for(int j=0; j<as.size(); j++){
        if(as[j]==bs[i]){
          as.erase(as.begin()+j);
          counter++;
          break;
        }
      }
    }
    
  }

  if(counter==m){
    ans="Yes";
  }

  
  cout<<ans<<endl;
  

  
  return 0;
}
    

    
    
    
    
