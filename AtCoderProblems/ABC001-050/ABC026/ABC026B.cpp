#define _USE_MATH_DEFINES
#include <math.h>

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <iomanip>



using namespace std;   

int main(){
    int n, r, rtwosum=0;
    vector<int> rs;
    double ans;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>r;
        rs.push_back(r);
    }

    sort(rs.begin(), rs.end(), greater<>());

    for(int i=0; i<n; i++){
        if(i%2==0){
            rtwosum+=pow(rs[i], 2);
        }else{
            rtwosum-=pow(rs[i], 2);
        }
    }

    ans=rtwosum*M_PI;

    //#include<iomanip>してsetprecision()をはさむと桁数指定ができる
    cout<<setprecision(10)<<ans<<endl;
    
    return 0;
}