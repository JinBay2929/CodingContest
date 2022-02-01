#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

//find関数の戻り値はポインタ

int main(){
    int n, counter=0;
    string name;
    vector<string> names;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>name;
        if(find(names.begin(), names.end(), name)==names.end()){
            names.push_back(name);
        }

    }
    return 0;
}