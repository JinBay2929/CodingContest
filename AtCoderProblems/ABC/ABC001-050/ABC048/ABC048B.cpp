
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    long long a, b, x, counter=0, num=-1;
    cin>>a>>b>>x;

    //aからbまで割り切れるかどうかを数え上げると時間かかる。
    //なので大体a付近でxの倍数を用意してxずつ足して行けば
    //早くa以上b以下でxで割り切れる数が出せる。
    long long i=(a/x)*x;
    while(true){
        if(i>=a && i%x==0){
            num=i;
            counter=(b-i)/x+1;
            break;
        }
        i+=x;
        if(i>b)break;
    }

    

    

    if(num==-1){
        cout<<0<<endl;
    }else{
        cout<<counter<<endl;
    }
    
    return 0;
}