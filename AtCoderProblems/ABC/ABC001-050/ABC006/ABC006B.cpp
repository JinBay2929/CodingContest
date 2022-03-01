#include<iostream>
#include<string>
#include<vector>


using namespace std;

vector<long long> memo(1000001, -1);

//再帰で呼び出すとめっちゃ時間かかる
//前から順番に全部リスト入れていけば良い
//オーバーフローするのでmemoリストに入れるときに10007で割ってる 
int main(){
    int n;

    cin>>n;
    
    memo[0]=0;
    memo[1]=0;
    memo[2]=1;

    for(int i=3; i<=n; i++){
        memo[i]=(memo[i-1]+memo[i-2]+memo[i-3])%10007;
    }

    cout<<memo[n-1]<<endl;

    

    return 0;
}