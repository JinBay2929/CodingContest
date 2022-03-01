
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, k;
    cin>>a>>b>>k;

    for(int i=a; i<=b; i++){
        if((a<=i && i<a+k) || (b-k<i && i<=b)){
            cout<<i<<endl;
        }
    }

    
    
    return 0;
}