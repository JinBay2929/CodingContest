#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    int a, b, c, k, s, t, total;
    cin>>a>>b>>c>>k>>s>>t;

    if(s+t>=k){
        total=(a-c)*s+(b-c)*t;
    }else{
        total=a*s+b*t;
    }
    

    cout<<total<<endl;


   
    
    return 0;
}