#include<iostream>

#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;



int main(){
    int n, mochi;
    vector<int> mochis;
    cin>>n;

    //モチリストを作成
    for(int i=0; i<n; i++){
        cin>>mochi;
        mochis.push_back(mochi);
    }
    //昇順ソート
    sort(mochis.begin(), mochis.end());

    /* unique()の使い方
    string s = "aabbbcddaaa";とする。

    auto n = unique(s.begin(), s.end());
    // これで s = abcda となってほしい
    cout << s << '\n';//しかし s = abcda?????? とゴミが残る

    // unique は返り値として ? の先頭を指すポインタを返す
    // そこで n から最後まで erase すれば完成
    s.erase(n,s.end());

    多分uniqueは隣接してる同じ値しか消せない
    なのでリスト全体から重複を消すにはソートしておく必要がある。
    */

    mochis.erase(unique(mochis.begin(), mochis.end()), mochis.end());

    //vectorの場合はlengthが反応しなかった。なのでsizeを使う。
    cout<<mochis.size()<<endl;
    
    return 0;
}