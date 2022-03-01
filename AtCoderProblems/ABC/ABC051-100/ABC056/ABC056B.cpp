
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int w, a, b, ans;
    cin>>w>>a>>b;

    if((a<=b&&b<=a+w) || (a<=b+w && b+w<=a+w)){
        ans=0;
    }else if(b>a+w){
        ans=b-(a+w);
    }else{
        ans=a-(b+w);
    }

    cout<<ans<<endl;

    
    return 0;
}