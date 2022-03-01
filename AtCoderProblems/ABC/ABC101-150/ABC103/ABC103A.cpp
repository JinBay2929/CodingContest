
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    int a, b, c, ans=200;
    cin>>a>>b>>c;

    //a=0
    if(abs(b-a) + abs(c-b)<ans){
        ans=abs(b-a) + abs(c-b);
    }
    if(abs(c-a) + abs(b-c)<ans){
        ans=abs(c-a) + abs(b-c);
    }
    //c=0
    if(abs(a-c) + abs(b-a)<ans){
        ans=abs(a-c) + abs(b-a);
    }
    if(abs(b-c) + abs(a-b)<ans){
        ans=abs(b-c) + abs(a-b);
    }
    //b=0
    if(abs(c-b) + abs(a-c)<ans){
        ans=abs(c-b) + abs(a-c);
    }
    if(abs(a-b) + abs(c-a)<ans){
        ans=abs(a-b) + abs(c-a);
    }
    cout<<ans<<endl;
    return 0;
}