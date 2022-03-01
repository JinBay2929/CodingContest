
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, ans, sum=0;
    cin>>a>>b;

    for(int i=1; i<=b-a-1; i++){
        sum+=i;
    }

    ans=sum-a;

    cout<<ans<<endl;
    
   
    return 0;
}