#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    int n, t, a, pa=0, total=0;
    cin>>n>>t;

    //i=0
    cin>>a;
    pa=a;

    //前の秒数と比較。差がtより大きければt追加、小さければ差分を追加
    for(int i=1; i<n; i++){
        cin>>a;
        if(a-pa>=t){
            total+=t;
        }else{
            total+=(a-pa);
        }
        pa=a;
    }
    //最終回以降は確定でt増加する
    total+=t;


    

    cout<<total<<endl;


   
    
    return 0;
}