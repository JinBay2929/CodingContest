
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int a, b, c, d, ans;
    cin>>a>>b>>c>>d;

    if(a*b>=c*d){
        ans=a*b;
    }else{
        ans=c*d;
    }

    cout<<ans<<endl;


    
    return 0;
}