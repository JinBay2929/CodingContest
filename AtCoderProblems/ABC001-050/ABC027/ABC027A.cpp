
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b){
        cout<<c<<endl;
    }else if(a!=b && a==c){
        cout<<b<<endl;
    }else{
        cout<<a<<endl;
    }


    
    return 0;
}