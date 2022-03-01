
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>



using namespace std;   

int main(){
    int n, l, place;
    string s, tmp, ans="";
    vector<string> vs;
    cin>>n>>l;
    

    for(int i=0; i<n; i++){
        cin>>s;
        vs.push_back(s);
    }

    for(int i=0; i<n; i++){
        tmp="";
        for(int j=0; j<n-i; j++){
            //辞書順はstringの大小比較でOK
            if(tmp==""||tmp>vs[j]){
                tmp=vs[j];
                place=j;
            }
        }
        ans+=tmp;
        vs.erase(vs.begin()+place);
    }

    cout<<ans<<endl;
    
    return 0;
}