
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>

using namespace std;   



int main() {
  int n;
  string w, ans="Yes";
  vector<string> words;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>w;
    words.push_back(w);
  }

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(words[i]==words[j]){
        ans="No";
        break;
      }
    }
    if(ans=="No"){
      break;
    }
  }

  for(int i=0; i<n-1; i++){
    if(words[i][words[i].length()-1]!=words[i+1][0]){
      ans="No";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
    

    
    
    
    
