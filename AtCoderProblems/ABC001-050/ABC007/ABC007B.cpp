#include<iostream>
#include<string>
#include<vector>


using namespace std;

//辞書順が小さければなんでも良いらしいのでa以外ならaを出力する
int main(){
    string a, ans;
    cin>>a;

    if(a!="a"){
        ans="a";
    }else{
        ans="-1";
    }

    cout<<ans<<endl;
    
    return 0;
}