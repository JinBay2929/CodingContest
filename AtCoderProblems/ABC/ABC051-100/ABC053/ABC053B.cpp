
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int ans=0, counter=0;
    string s;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='A'){
            //Zは右から探せばいい
            for(int j=s.length()-1; j>i; j--){
                if(s[j]=='Z'){
                    counter=j-i+1;
                    break;
                }
            }
            if(counter>ans){
                ans=counter;
            }
        }
        
    }
    cout<<ans<<endl;


    
    return 0;
}