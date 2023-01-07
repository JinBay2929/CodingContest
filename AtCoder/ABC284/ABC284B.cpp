
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





long long  t, test[109], ans=0;



int main() {
	// 入力
	cin >> t;
	for (int i = 1; i <= t; i++){
    ans=0;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
      cin >> test[i];
    }
     for (int i = 1; i <= n; i++){
      if(test[i]%2==1){
        ans++;
      }
    }

    cout<<ans<<endl;
  }


  
	

	return 0;
}