
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    char x, y;
    char ans;

    cin>>x>>y;
    if(x>y){
        ans='>';
    }else if(x==y){
        ans='=';
    }else{
        ans='<';
    }
    cout<<ans<<endl;

    
    return 0;
}