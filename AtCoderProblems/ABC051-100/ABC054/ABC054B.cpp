
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, m;
    string a, b, ans="No";
    vector<string> va, vb;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>a;
        va.push_back(a);
    }

    for(int i=0; i<m; i++){
        cin>>b;
        vb.push_back(b);    
    }
    //Aの中での位置決め
    for(int i=0; i<=n-m; i++){
        for(int j=0; j<=n-m; j++){
            //Bの中でm*m箇所が一致するかをチェックする
            int counter=0;
            for(int k=0; k<m; k++){
                for(int l=0; l<m; l++){
                    if(va[i+k][j+l]==vb[k][l]){
                        counter++;
                    }
                }
            }
            if(counter==m*m){
                ans="Yes";
                break;
            }
        }
    }

    cout<<ans<<endl;
    

    
    return 0;
}