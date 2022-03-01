
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string s, ans;
  
    
    cin>>s;
    //初回に偶文字列になってもカウントしないらしいので最初に1字消す
    s=s.substr(0, s.length()-1);

    while(true){
        
        if(s.length()%2==0){
            int counter=0;
            for(int i=0; i<(s.length()/2); i++){
                if(s[i]==s[(s.length()/2)+i]){
                    counter++;
                }else{
                    break;
                }
            }
            if(counter==s.length()/2){
                break;
            }else{
                s=s.substr(0, s.length()-1);
                
            }
        }else{
            s=s.substr(0, s.length()-1);
            
        }
    }


    cout<<s.length()<<endl;
    
    return 0;
}