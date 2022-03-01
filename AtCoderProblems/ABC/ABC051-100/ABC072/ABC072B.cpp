
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string s, news;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(i%2==0){
            news.push_back(s[i]);
        }
    }

    cout<<news<<endl;
    
    return 0;
}