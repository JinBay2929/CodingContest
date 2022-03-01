
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b, ans=0;
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        int counter=0;
        string si=to_string(i);
        
        for(int j=0; j<si.length()/2; j++){
            if(si[j]==si[si.length()-1-j]){
                counter++;
            }
        }
        if(counter==si.length()/2){
            ans++;
        }
        
    }


    cout<<ans<<endl;
    return 0;
}