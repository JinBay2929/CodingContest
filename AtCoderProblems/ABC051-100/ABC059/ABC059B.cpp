
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string a,b, ans;
    int la, lb;
    

    cin>>a>>b;

    //桁数比較でけりがつくケース、つかないケースを考える。
    la=a.length();
    lb=b.length();

    if(la>lb){
        ans="GREATER";
    }else if(la<lb){
        ans="LESS";
    }else{
        if(a==b){
            ans="EQUAL";
        }else{
            for(int i=0; i<la; i++){
                if(a[i]>b[i]){
                    ans="GREATER";
                    break;
                }else if(a[i]<b[i]){
                    ans="LESS";
                    break;
                }
            }
        }
    }
    
    cout<<ans<<endl;
    
    
    return 0;
}