
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    string a, b, ab, ans="No";
    cin>>a>>b;

    ab=a+b;
    int iab=stoi(ab);

    int sq=sqrt(iab);

    if(sq*sq==iab){
        ans="Yes";
    }


    cout<<ans<<endl;
    return 0;
}