
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   



int main(){
    int n, t, m, p, x;
    vector<int> times;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t;
        times.push_back(t);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        int total=0;
        cin>>p>>x;
        for(int j=0; j<n; j++){
            if(j!=p-1){
                total+=times[j];
            }else{
                total+=x;
            }
        }
        cout<<total<<endl;
    }


    
    return 0;
}