#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;



int main(){
    int n;
    
    cin>>n;

    
    if(n!=11){
        cout<<(n+1)%12<<endl;
    }else{
        cout<<12<<endl;
    }
    
    
    
    return 0;
}