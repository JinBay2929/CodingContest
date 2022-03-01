
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>

using namespace std;   



int main(){
    int n;
    int time, counter=0;
    cin>>n;

    for(int i=1; i<=n; i+=2){
        time=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                time++;
            }  
        }
        if(time==8){
            counter++;
        }
    }
    
    cout<<counter<<endl;
    return 0;
}