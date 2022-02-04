
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    //出てきたアルファベットのリストalphabets、カウントするためのマップcounter
    string w, ans="Yes";
    vector<char> alphabets;
    map<char, int> counter;
    
    cin>>w;

    for(int i=0; i<w.length(); i++){
        if(find(alphabets.begin(), alphabets.end(), w[i])==alphabets.end()){
            alphabets.push_back(w[i]);
            counter[w[i]]=1;
        }else{
            counter[w[i]]+=1;
        }
    }

    for(int i=0; i<alphabets.size(); i++){
        if(counter[alphabets[i]]%2!=0){
            ans="No";
            break;
        }
    }


    cout<<ans<<endl;
    
    return 0;
}