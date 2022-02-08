#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>

using namespace std;

//カードを降順にソートし、大きい数字から交互に取っていくと考える

int main(){
    int n, cards[100], alice=0, bob=0;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>cards[i];
    }
    //降順ソート
    sort(cards, cards+n, greater<>());

    for(int i=0; i<n; i+=2){
        alice+=cards[i];
    }
    for(int j=1; j<n; j+=2){
        bob+=cards[j];
    }

    cout<<alice-bob<<endl;
    return 0;
}