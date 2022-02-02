#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;    

//一周して０に戻るパターンを考えると、１０足して絶対値をとればいいと思った
int main(){
    int a, b, mintime, time;
    cin>>a>>b;

    mintime=abs(a-b);
    time=abs((a+10)-b);
    if(mintime>time){
        mintime=time;
    }

    time=abs(a-(b+10));
    if(mintime>time){
        mintime=time;
    }


    cout<<mintime<<endl;

    return 0;
}