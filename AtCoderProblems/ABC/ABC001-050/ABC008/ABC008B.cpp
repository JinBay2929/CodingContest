#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;



int main(){
    //<名前：票数>のmap,meiboと名前のみを管理するリストnamesを作る
    int n;
    string name;
    vector<string> names;
    map<string, int> meibo;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>name;
        if(!meibo.count(name)){
            names.push_back(name);
            meibo[name]=1;
        }else{
            meibo[name]+=1;
        }
    }
    //最大票の人間を探す
    int hyou, maxhyou=0;
    string maxname;
    for(int i=0; i<names.size(); i++){
        hyou=meibo.at(names[i]);
        if(hyou>maxhyou){
            maxhyou=hyou;
            maxname=names[i];
        }
    }
    cout<<maxname<<endl;
    
    
    return 0;
}