#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    string s;
    string word;
    vector<string> words;
    int n;

    cin>>s>>n;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            word="";
            word+=s[i];
            word+=s[j];
            words.push_back(word);
        }
    }


    

    cout<<words[n-1]<<endl;


   
    
    return 0;
}