#include<iostream>

#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;



int main(){
    int n, t, x, y;
    //現在地の座標を格納する。
    //for文の次の回転で比較する
    int tp=0, xp=0, yp=0;
    bool able;
    cin>>n;

    for(int i=0; i<n; i++){
        able=0;
        cin>>t>>x>>y;
        int dt=t-tp;
        int dx=x-xp;
        int dy=y-yp;
        
        //tの値によって動ける値は変化する。
        //線形計画法と同じ手口で範囲は搾れる。
        //あとは偶奇でいける行けないが変わるのでチェックする
        if((dy<=-dx+dt)&&(dy<=dx+dt)&&(dy>=-dx-dt)&&(dy>=dx-dt)){
            if(dt%2==0&&(dx+dy)%2==0){
                able=1;
            }else if(dt%2==1&&abs((dx+dy)%2)==1){
                //マイナスの値（奇数）を割り算するとあまりは-1になるらしい。
                //そこでabs(あまり)==1にして突破する
                able=1;
            }
        }
        if(able==0){break;}
        tp=t;
        xp=x;
        yp=y;
        
    }
    

    if(able){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}