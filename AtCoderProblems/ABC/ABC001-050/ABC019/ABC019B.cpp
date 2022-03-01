#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;    
int main(){
    int time, i;
    string s;
    cin>>s;

    i=0;
    while(i<s.length()){
        time=0;
        char ch=s[i];
        
        while(true){
            if(s[i]==ch){
                time++;
                i++;
            }else{
                break;
            }
        }
        cout<<ch<<time;
    }
    cout<<endl;


    return 0;
}