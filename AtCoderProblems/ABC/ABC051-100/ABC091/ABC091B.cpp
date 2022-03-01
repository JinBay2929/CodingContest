
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, m;
    string s, t, card;
    vector<string> bwords, bcards, rcards;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>card;
        bcards.push_back(card);
        if(find(bwords.begin(), bwords.end(), card)==bwords.end()){
            bwords.push_back(card);
        }
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>card;
        rcards.push_back(card);
    }
    int max=-300;
    for(int i=0; i<bwords.size(); i++){
        int bcount=0, rcount=0;
        for(int j=0; j<n; j++){
            if(bcards[j]==bwords[i]){
                bcount++;
            }
        }
        for(int j=0; j<m; j++){
            if(rcards[j]==bwords[i]){
                rcount++;
            }
        }
        
        int point=bcount-rcount;
        if(point>max){
            max=point;
        }
    }
    if(max<0){
        max=0;
    }

    cout<<max<<endl;
    
    return 0;
}