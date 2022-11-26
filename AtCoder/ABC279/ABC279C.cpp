
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


string s[400009], t[400009], ans="No";
int h, w;
vector<vector<int> > si, ti;
vector<int> si_row, si_line, ti_row, ti_line;

int main(){
  cin>>h>>w;
  for(int i=0; i<h; i++)cin>>s[i];
  for(int i=0; i<h; i++)cin>>t[i];
 
  for(int i=0; i<h; i++){
    vector<int> tmp;
    for(int j=0; j<w; j++){
      
      if(s[i][j]=='#'){
        tmp.push_back(1);
      }else if(s[i][j]=='.'){
        tmp.push_back(0);
      }
    }
    si.push_back(tmp);
  }

  for(int i=0; i<h; i++){
    vector<int> tmp;
    for(int j=0; j<w; j++){
      if(t[i][j]=='#'){
        tmp.push_back(1);
      }else{
        tmp.push_back(0);
      }
    }
    ti.push_back(tmp);
  }
  int sum;

  for(int i=0; i<h; i++){
    sum=0;
    for(int j=0; j<w; j++){
      sum+=si[i][j];
    }
    si_row.push_back(sum);
  }
  for(int i=0; i<h; i++){
    int sum=0;
    for(int j=0; j<w; j++){
      sum+=ti[i][j];
    }
    ti_row.push_back(sum);
  }

  for(int i=0; i<w; i++){
    int sum=0;
    for(int j=0; j<h; j++){
      sum+=si[j][i];
    }
    si_line.push_back(sum);
  }

  for(int i=0; i<w; i++){
    int sum=0;
    for(int j=0; j<h; j++){
      sum+=ti[j][i];
    }
    ti_line.push_back(sum);
  }


  sort(si_line.begin(), si_line.end());
  sort(ti_line.begin(), ti_line.end());

  if(si_row==ti_row && si_line==ti_line){
    ans="Yes";
  }

  cout<<ans<<endl;



  return 0;
}
    

    
    
    
    
