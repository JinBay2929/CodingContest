#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;

string formatter(int n){
    if(0<=n&&n<=9){
        return "0"+to_string(n);
    }else{
        return to_string(n);
    }
}

int main(){
    int n, s, m,  h;
    cin>>n;

    s=n%60;
    h=n/3600;
    m=(n/60)%60;

    
    cout<<formatter(h)<<":"<<formatter(m)<<":"<<formatter(s)<<endl;
    
    
    
    
    return 0;
}