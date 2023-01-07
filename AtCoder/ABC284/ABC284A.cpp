
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





int n, ans;
string s[20];


int main() {
	// 入力
	cin >> n;
	for (int i = 1; i <= n; i++){
     cin >> s[i];
  }

  for (int i = n; i >= 1; i--){
     cout<<s[i]<<endl;
  }

	

	return 0;
}