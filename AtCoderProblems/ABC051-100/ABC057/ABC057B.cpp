
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int n, m, a, b, c, d, dist, distch=0, tmp;
    int stu[50][2], check[50][2];
    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        stu[i][0]=a;
        stu[i][1]=b;
    }
    for(int i=0; i<m; i++){
        cin>>c>>d;
        check[i][0]=c;
        check[i][1]=d;
    }

    for(int i=0; i<n; i++){
        tmp=0;
        dist=pow(10,8);
        for(int j=0; j<m; j++){
            tmp=abs(stu[i][0]-check[j][0])+abs(stu[i][1]-check[j][1]);
            if(j==0){
                dist=tmp;
                distch=1;
            }else{
                if(tmp<dist){
                    dist=tmp;
                    distch=j+1;
                }
            }
        }
        cout<<distch<<endl;
    }

  


    

    
    return 0;
}