
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string s;
    cin>>s;

    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    return 0;
}