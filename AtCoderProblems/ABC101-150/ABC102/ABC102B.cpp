
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    int n, a;
    int as[100];
    
    
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        as[i]=a;
    }

    int max=0;
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            if(max<(abs(as[i] - as[j]))){
                max=abs(as[i] - as[j]);
            }
        }  
    }
   

    cout<<max<<endl;
    return 0;
}