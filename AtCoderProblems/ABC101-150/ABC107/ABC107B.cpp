
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>

using namespace std;   



int main() {
  int h, w;
  cin >> h >> w;
  vector<bool> bh(h);  // 行
  vector<bool> bw(w);  // 列
  vector<vector<char>> a(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
      //入力に#が一つでもあればその行、列は確定で出力することになる。
      //最終的に出力する必要のない行、列の部分がfalseで残る
      if (a[i][j] == '#') {
        bh[i] = true;
        bw[j] = true;
      }
    }
  }
  for (int i = 0; i < a.size(); i++) {
    if (!bh[i]) {
        //falseの行は出力しない。continueを上手く使ってる。
        continue;
    }
    for (int j = 0; j < a[i].size(); j++) {
      if (!bw[j]) {
        continue;
      }
      cout << a[i][j];
    }
    cout << endl;
  }

  return 0;
}
    

    
    
    
    
