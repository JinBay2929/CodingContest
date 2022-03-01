
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

char cadd(char c){
    int ic=int(c-'0');
    ic++;
    char cic=ic+'0';
    return cic;
}

int main(){
    int r, g, ans;
    cin>>r>>g;
    
    ans=2*g-r;

    cout<<ans<<endl;

   
    
    return 0;
}