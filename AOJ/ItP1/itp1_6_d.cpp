#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n,m, num;
  cin>>n>>m;
  int numsa[100][100];
  int numsb[100], ans[100];

    //ベクトルAを作る
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>numsa[i][j];
        }
    }
    //ベクトルBを作る
    for(int j=0; j<m; j++){
        cin>>num;
        numsb[j]=num;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans[i]+=numsa[i][j]*numsb[j];
        }
        cout<<ans[i]<<endl;
    }
    return 0;
}