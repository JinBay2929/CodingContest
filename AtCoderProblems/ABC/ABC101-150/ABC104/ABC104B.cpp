
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   



int main(){
    string s, ans="WA";
    int place=-1, counter=0;
    cin>>s;


    if(s[0]=='A'){
        //'C'のチェック
        //一つでもあればOKで、複数のCは後の小文字チェックでどうせはじける
        for(int i=2; i<s.length()-1; i++){
            if(s[i]=='C'){
                place=i;
                break;
            }
        }
        if(place!=-1){
            s.erase(s.begin()+place);
            s=s.substr(1, s.length()-1);
            

            for(int j=0; j<s.length(); j++){
                if('a'>s[j] || s[j]>'z'){
                    break;
                }
                counter++;
            }
            if(counter==s.length()){
                ans="AC";
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}