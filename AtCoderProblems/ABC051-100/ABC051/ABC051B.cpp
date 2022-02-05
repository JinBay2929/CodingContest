
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int k, s, counter=0, l;
    cin>>k>>s;


    //計算量削減。最後の数字は導出したものが条件を満たすか判定するだけにする
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            l=s-i-j;
            if(0<=l && l<=k){
                counter++;
            }
        }
    }

    cout<<counter<<endl;


    
    return 0;
}