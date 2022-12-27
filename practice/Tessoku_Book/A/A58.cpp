
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

//解説より拝借。セグ木のclassは今後も活用できそう

class SegmentTree{
  public:
  int dat[300000], siz=1;

  //dat初期化(0埋め)
  void init(int n){
    siz=1;
    while(siz<n)siz*=2;
    for(int i=1; i<siz; i++)dat[i]=0;
  }

  // クエリ 1 に対する処理
	void update(int pos, int x) {
    //与えられたposをセグ木上の場所に変換
		pos = pos + siz - 1;
		dat[pos] = x;
    //上へ上へと最大値更新
		while (pos >= 2) {
			pos /= 2;
			dat[pos] = max(dat[pos * 2], dat[pos * 2 + 1]);
		}
	}


  // クエリ 2 に対する処理
	// u は現在のセル番号、[a, b) はセルに対応する半開区間
  //、[l, r) は求めたい半開区間
	int query(int l, int r, int a, int b, int u) {
		if (r <= a || b <= l) return -1000000000; // 一切含まれない場合
		if (l <= a && b <= r) return dat[u]; // 完全に含まれる場合
		int m = (a + b) / 2;
		int AnswerL = query(l, r, a, m, u * 2); //左下のセル
		int AnswerR = query(l, r, m, b, u * 2 + 1); //右下のセル
		return max(AnswerL, AnswerR);
	}
};

int n, q;
int Query[100009], pos[100009], x[100009], l[100009], r[100009];
SegmentTree z;


int main(){
  cin>>n>>q;
  
  for (int i = 1; i <= q; i++) {
		cin >> Query[i];
		if (Query[i] == 1) cin >> pos[i] >> x[i];
		if (Query[i] == 2) cin >> l[i] >> r[i];
	}

  z.init(n);

  for (int i = 1; i <= q; i++) {
		if (Query[i] == 1) {
			z.update(pos[i], x[i]);
		}
		if (Query[i] == 2) {
			// 最初のセルに対応する半開区間は [1, siz + 1)
			int Answer = z.query(l[i], r[i], 1, z.siz + 1, 1);
			cout << Answer << endl;
		}
	}

  return 0;
}
    
