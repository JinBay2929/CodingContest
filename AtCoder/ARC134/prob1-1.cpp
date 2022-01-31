#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
  long long  n, l, w, num, counter=0;;
  cin>>n>>l>>w;
  vector<int> bridge;

  //リストが長すぎると計算しきれずエラー
  for(int i=0; i<n; i++){
    cin>>num;
    for(int j=0; j<w+1; j++){
      bridge.push_back(num+j);
    }
  }
  sort(bridge.begin(), bridge.end());
  bridge.erase(unique(bridge.begin(), bridge.end()), bridge.end());
  int lo=bridge.size();
//   for(int i=0; i<lo; i++){
//     cout<<bridge[i]<<endl;
//   }
    
  
//   for(int i=0; i<l-w; i++){
//     if(bridge[i]==0){
//       for(int j=0; j<w+1; j++){
//         bridge[i+j]=1;
//       }
//       counter++;
//     }
//   }
//   //cout<<counter<<endl;

//   for(int i=0; i<w; i++){
//     if(bridge[l-w+i+1]==0){
//       counter++;
//       break;
//     }
//   }

//   cout<<counter<<endl;
//   return 0;
}