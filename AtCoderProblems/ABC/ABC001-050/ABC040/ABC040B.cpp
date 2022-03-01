
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    int n, num, ans=1000000;
    cin>>n;

    //基本総当たり。√ｎ以下まで試せば良い
    for(int h=1; h<=sqrt(n); h++){
        num=abs(h-(n/h)) + n-(h*(n/h));
        if(num<ans){
            ans=num;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}