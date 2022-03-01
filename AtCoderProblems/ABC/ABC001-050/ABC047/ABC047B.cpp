
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

//数値が全部整数なので1*1のパネルを敷き詰めるイメージで。

int main(){
    int w, h, n, area[100][100], x, y, a;

    cin>>w>>h>>n;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            area[i][j]=1;
        }
    }

    for(int i=0; i<n; i++){
        cin>>x>>y>>a;

        if(a==1){
            for(int i=0; i<h; i++){
                for(int j=0; j<x; j++){
                    area[i][j]=0;
                }
            }
        }else if(a==2){
            for(int i=0; i<h; i++){
                for(int j=x; j<w; j++){
                    area[i][j]=0;
                }
            }
        }else if(a==3){
            for(int i=0; i<y; i++){
                for(int j=0; j<w; j++){
                    area[i][j]=0;
                }
            }
        }else if(a==4){
            for(int i=y; i<h; i++){
                for(int j=0; j<w; j++){
                    area[i][j]=0;
                }
            }
        }
    }

    int sum=0;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            sum+=area[i][j];
        }
    }

    


    cout<<sum<<endl;
    
    return 0;
}