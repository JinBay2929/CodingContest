
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   

//stringの数字列で１の足し算を頑張る関数
string strplsone(string s){
    int len=s.length();
    int counter=0;
    for(int i=len-1; i>=0; i--){
        if(s[i]=='9'){
            s[i]='0';
            counter++;
        }else{
            int tmp=(int)(s[i]-'0') + 1;
            s[i]=char('0' + tmp);
            break;
        }
    }

    if(counter==len){
        string ans="1";
        ans += s;
        return ans;
    }else{
        return s;
    }
}


int main(){
    string x, cusx;
    int ans, len, ix;
    cin>>x;

    len=x.length();
    if(len==1){
        int tmp=(int)(x[0]-'0');
        cout<<tmp/10<<endl;
    }else{
        if(x[0]=='-'){
            x=x.substr(1,len-1);
            
            if(x[len-2]=='0'){
                cusx=x.substr(0,len-2);
                cout<<'-'<<cusx<<endl;
            }else{
                cusx=x.substr(0,len-2);
                cout<<'-'<<strplsone(cusx)<<endl;
            }
        }else{
            if(x[len-1]=='0'){
                cusx=x.substr(0,len-1);
                cout<<cusx<<endl;
            }else{
                cusx=x.substr(0,len-1);
                cout<<cusx<<endl;
            }
        }
    }
    

    
    
   
    return 0;
}