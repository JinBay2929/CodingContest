#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){
    string w;
    vector<char> nw;

    cin>>w;

    for(int i=0; i<w.length(); i++){
        if(w[i]!='a'&&w[i]!='i'&&w[i]!='u'&&w[i]!='e'&&w[i]!='o'){
            nw.push_back(w[i]);
        }
    }

    for(int i=0; i<nw.size(); i++){
        cout<<nw[i];
    }
    cout<<endl;



    

    return 0;
}