
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

    cout<<s.substr(0, 5)<<" "<<s.substr(6, 7)<<" "<<s.substr(14, 5);


    
    return 0;
}