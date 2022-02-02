#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;    
int main(){
    string a, b;
    cin>>a>>b;

    if(a.length()>b.length()){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }

    return 0;
}