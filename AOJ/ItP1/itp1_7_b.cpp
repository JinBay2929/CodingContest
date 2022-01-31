#include<iostream>
#include<stdio.h>
#include <vector>

using namespace std;

//考えたけど力押ししかできんかった

int main(){
    int n, x;
    int i, j, k, count;

    while(true){
        count=0; 
        cin>>n>>x;
        if(n==0&&x==0){
            break;
        }else{
            for(i=1; i<=n-2; i++){
                for(j=i+1; j<=n-1; j++){
                    for(k=j+1; k<=n; k++){
                        if(i+j+k==x){count++;}
                    }
                }
            }
            cout<<count<<endl;
        }
    }
    

        
    return 0;
}