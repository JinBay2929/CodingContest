#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    string s;
    int n, l, r;

    cin>>s>>n;

    for(int i=0; i<n; i++){
        cin>>l>>r;
        for(int j=0; j<(r-l+1)/2; j++){
            char tmp=s[r-j-1];
            s[r-j-1]=s[l+j-1];
            s[l+j-1]=tmp;
            
        }
    }

    cout<<s<<endl;

    

    return 0;
}