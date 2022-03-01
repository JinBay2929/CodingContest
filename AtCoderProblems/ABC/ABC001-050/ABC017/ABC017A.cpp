#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    int s, e, sum=0;

    for(int i=0; i<3; i++){
        cin>>s>>e;
        sum+=s*0.1*e;
    }

    cout<<sum<<endl;
    return 0;
}