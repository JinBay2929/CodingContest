
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>




using namespace std;   




int main(){
    long long xone, yone, xtwo, ytwo;
    long long a, b;
    int points[8][2]={{2, 1}, {1, 2},{2, -1},{-2, 1},
                        {-2,-1},{-1,-2},{1, 2},{2, 1},};
    double dis;
    string ans;
    cin>>xone>>yone>>xtwo>>ytwo;


    for(int i=0; i<8; i++){
        a=xone+points[i][0];
        b=yone+points[i][1];

        
        if(abs(a-xtwo)>sqrt(5) || abs(b-ytwo)>sqrt(5)){
            ans="No";
        }else{
            dis=pow(a-xtwo, 2) + pow(b-ytwo, 2);

            if(dis==5){
                ans="Yes";
                break;
            }else{
                ans="No";
            }
        }
    }

    cout<<ans<<endl;
   
    return 0;
}