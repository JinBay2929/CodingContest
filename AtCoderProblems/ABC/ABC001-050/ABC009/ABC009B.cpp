#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;



int main(){
    int n, price;
    vector<int> prices;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>price;
        //vector中の要素の有無を調べる。
        //priceを探す矢印が末尾まで行って、かつ発見できなかったら
        //priceをリストpricesに追加する
        if(find(prices.begin(), prices.end(), price)==prices.end()){
            prices.push_back(price);
        }
    }

    sort(prices.begin(), prices.end(), greater<int>());

    cout<<prices[1]<<endl;
    
    
    return 0;
}