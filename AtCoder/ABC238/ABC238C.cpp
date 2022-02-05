
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

long long func(long long x){
    int counter=0;
    string sx=to_string(x);
    int keta =sx.length();

    long long ans=x-pow(10, keta-1)+1;
    
    return ans;
}

long long ketafunc(int keta){
    long long ans=0;

    if(keta==1){
        ans=45;
    }else{
        ans=(1+9*round(pow(10, keta-1)))*9*round(pow(10, keta-1))*0.5;
    }
    return ans;
}



int main(){
    long long n, answer=0, tmp;
    cin>>n;

    //nの桁数測定 ln桁
    string sn=to_string(n);
    int ln=sn.length();

    if(ln==1){
        for(int i=1; i<=n; i++){
            answer+=func(i);
        }
    }else{
        //全部計算しないといけない桁数のものは最初から和を出しておけばいい
        for(int i=1; i<ln; i++){
            answer+=ketafunc(i);
            if(answer>998244353){
                answer = answer%998244353;
            }
        }
        //最上位の桁が問題。f(x)は998244353を超えると余りは1に帰ってくるので
        //nの桁数の最初～nまでの項数を998244353で割ると、商の部分は
        //どうせ割り切れるので無視、割り算の余りが問題。
        //1~(あまり)を足しつつ998244353でわりつつしてたが計算が合わない。
        //やり方は多分あってるはず


        long long lp=(long long)(round(pow(10, ln-1))) ;
        cout<<n-lp+1<<endl;
        long long amari=(n-lp+1)%998244353;
        
        long long a=((1+amari)%998244353)*amari*0.5;
        //answer+=998244354*0.5*syou;
        answer+=(a%998244353);

        answer=answer%998244353;
    }

    // cout<<pow(10, 2)<<endl;
    // cout<<func(100)<<endl;
    // cout<<func(round(pow(10, 2)))<<endl;

    //pow(2, ln-1)で沼った。厳密には10^(ln-1)をしていないらしい。
    //応急処置としてroundで四捨五入して対応。
   

    

    
   
    
    cout<<answer<<endl;


    
    return 0;
}