
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string a,b,c;
    char ca, cb, cc;

    cin>>a>>b>>c;

    ca=a[0]+('A'-'a');
    cb=b[0]+('A'-'a');
    cc=c[0]+('A'-'a');
    
    cout<<ca<<cb<<cc<<endl;

    
    
    
    return 0;
}