
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int n, x=0, maxx=0;
    string s;

    cin>>n>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='I'){
            x++;
        }else if(s[i]=='D'){
            x--;
        }

        if(maxx<x){
            maxx=x;
        }
    }

    cout<<maxx<<endl;


    
    return 0;
}