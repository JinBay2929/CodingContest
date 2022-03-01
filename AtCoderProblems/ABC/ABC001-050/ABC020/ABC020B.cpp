#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

//stoi("string型の数字")でintをstringに変換できる
using namespace std;    
int main(){
    int a, b, ans;
    cin>>a>>b;

    ans= 2 * stoi(to_string(a)+to_string(b));

    cout<<ans<<endl;


    return 0;
}