
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
#include <iomanip>

using namespace std;   

using ll=long long;
using ld=long double;
#define PI (ld)3.14159265358979

int r, c;
char b[29][29];
bool bombed[29][29];
char ans[29][29];



int main(){
  cin>>r>>c;
  for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
      cin>>b[i][j];
    }
  }

  for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
      ans[i][j]=b[i][j];
    }
  }



  for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
      if(b[i][j]>='1' && b[i][j]<='9'){
        int tmp=b[i][j]-'0'; 

        for(int h=1; h<=r; h++){
          for(int w=1; w<=c; w++){
            if(abs(h-i)+abs(w-j)<=tmp){
              ans[h][w]='.';
              
            }
          }
        }

        // for(int p=1; p<=r; p++){
        //   for(int q=1; q<=c; q++){
            
        //     cout<<ans[p][q];
        //   }
        //   cout<<endl;
        // }
      }
    }
  }
  
  

  for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
      
      cout<<ans[i][j];
    }
    cout<<endl;
  }
  


  return 0;

}
    
