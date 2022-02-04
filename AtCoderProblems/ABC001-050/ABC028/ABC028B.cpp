
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    vector<int> counter(6,0);
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='A'){
            counter[0]++;
        }else if(s[i]=='B'){
            counter[1]++;
        }else if(s[i]=='C'){
            counter[2]++;
        }else if(s[i]=='D'){
            counter[3]++;
        }else if(s[i]=='E'){
            counter[4]++;
        }else{
            counter[5]++;
        }
    }

    for(int i=0; i<6; i++){
        if(i!=0){
            cout<<" ";
        }
        cout<<counter[i];
    }

    


    cout<<endl;


    
    return 0;
}