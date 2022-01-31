#include<iostream>
#include<stdio.h>
#include <vector>

using namespace std;


int main(){
    int r, c, num, total;
    int nums[101][101];
    cin>>r>>c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>num;
            nums[i][j]=num;
        }
    }
    //右側計算
    for(int i=0; i<r; i++){
        total=0;
        for(int j=0; j<c; j++){
            total+=nums[i][j];            
        }
        nums[i][c]=total;
    }
    //下側計算
    for(int j=0; j<c; j++){
        total=0;
        for(int i=0; i<r; i++){
            total+=nums[i][j];            
        }
        nums[r][j]=total;
    }
    //合計
    total=0;
    for(int i=0; i<r; i++){
        total+=nums[i][c];
    }
    nums[r][c]=total;

    //出力
    for(int i=0; i<r+1; i++){
        for(int j=0; j<c+1; j++){
            if(j!=0){
                cout<<" ";
            }
            cout<<nums[i][j];
        }
        cout<<endl;
    }
    return 0;
}