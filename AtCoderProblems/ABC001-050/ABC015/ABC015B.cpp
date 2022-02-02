#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    //バグ0のものは平均の母数に含めないので0の数をカウントしてあとで引く
    int n, a, sum=0 ,zcounter=0; 
    double avg;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==0){zcounter++;}
        sum+=a;
    }
    
    avg=(double)sum/(n-zcounter);

    //ceil(num)でnum以上の最小の整数になる
    cout<<ceil(avg)<<endl;


    return 0;
}