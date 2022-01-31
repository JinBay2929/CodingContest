#include <queue>
#include<string>
#include <iostream>
#include<utility>

using namespace std;

int main(){
    int n,q, time, total_time=0;
    string name;
    //>>ではなく> >にしないとエラー
    queue<pair<string, int> > que;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        cin>>name>>time;
        que.push(make_pair(name, time));
    }

    while(!que.empty()){
        pair<string, int> tp = que.front();
        que.pop();
        if(tp.second<=q){
            total_time+=tp.second;
            cout<<tp.first<<" "<<total_time<<endl;
        }else{
            total_time+=q;
            que.push(make_pair(tp.first, tp.second-q));
        }
    }
}