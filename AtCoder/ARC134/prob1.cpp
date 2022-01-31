#include<iostream>
#include<vector>

using namespace std;

int main(){
  long long  n, l, w, num, counter=0;;
  cin>>n>>l>>w;
  vector<long long> bridge(n, 0);

  //リストが長すぎると計算しきれずエラー
  for(int i=0; i<n; i++){
    cin>>num;
    for(int j=0; j<w+1; j++){
      bridge[num+j]=1;
    }
  }
  // for(int i=0; i<=l; i++){
  //   cout<<bridge[i]<<endl;
  // }

  
  for(int i=0; i<l-w; i++){
    if(bridge[i]==0){
      for(int j=0; j<w+1; j++){
        bridge[i+j]=1;
      }
      counter++;
    }
  }
  //cout<<counter<<endl;

  for(int i=0; i<w; i++){
    if(bridge[l-w+i+1]==0){
      counter++;
      break;
    }
  }

  cout<<counter<<endl;
  return 0;
}