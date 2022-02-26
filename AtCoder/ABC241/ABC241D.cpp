
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>

using namespace std;   



int main() {
  int q, n, x, k;
  vector<int> nums, ans;
  vector<vector<string> > v;
  vector<string> tmp;                 
  string str, s, sq;        

  getline(cin, sq);
  q=stoi(sq);

  for(int i=0; i<q; i++){
    tmp={};
    getline(cin,str);               

    stringstream ss{str};             

    while ( getline(ss, s, ' ') ){    
        tmp.push_back(s);
    }
    v.push_back(tmp);
  }

  for(int i=0; i<q; i++){
    if(v[i][0]=="1"){
      nums.push_back(stoi(v[i][1]));
    }else if(v[i][0]=="2"){
      x=stoi(v[i][1]);
      k=stoi(v[i][2]);

      sort(nums.begin(), nums.end());

      if(nums[nums.size()-1]>=x){
        for(int j=0; j<nums.size(); j++){
          if(nums[j]>x){
            if(j<k){
              ans.push_back(-1);
            }else{
              ans.push_back(nums[j-1]);
            }

          }
        }
      }else{
        if(nums.size()<=k){
          ans.push_back(-1);
        }else{
          ans.push_back(nums[nums.size()-k]);
        }
      }
      

    }else if(v[i][0]=="3"){
      x=stoi(v[i][1]);
      k=stoi(v[i][2]);
      sort(nums.begin(), nums.end(), greater<>());

      for(int j=0; j<nums.size(); j++){
        if(nums[j]<x){
          if(j<k){
            ans.push_back(-1);
          }else{
            ans.push_back(nums[j-k]);
          }

        }
      }
  }


    
    
    
  }

  // for(int i=0; i<nums.size(); i++){
  //   cout<<nums[i]<<endl;
  // }


  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<endl;
  }

  
  
  

  
  return 0;
}
    

    
    
    
    
