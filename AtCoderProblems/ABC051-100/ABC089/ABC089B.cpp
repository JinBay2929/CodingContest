
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n;
    char s;
    string ans="Three";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>s;
        if(s=='Y'){
            ans="Four";
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}