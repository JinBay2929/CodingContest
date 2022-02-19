
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   

//素数なら１、ちがうなら０
bool sosuucheck(int n){
    bool ans=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            ans=0;
            break;
        }
    }

    return ans;
}


int main(){
    int a, b, c, d, counter;
    string ans="Aoki";
    
    cin>>a>>b>>c>>d;

    for(int i=a; i<=b; i++){
        counter=0;
        for(int j=c; j<=d; j++){
            if(sosuucheck(i+j)==1){
                break;
            }
            counter++;
        }

        if(counter==(d-c+1)){
            ans="Takahashi";
        }
    }
   

    cout<<ans<<endl;
    return 0;
}