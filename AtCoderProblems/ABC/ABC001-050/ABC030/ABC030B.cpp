
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<iomanip>



using namespace std;   

int main(){
    int n,m;
    double dn, dm;

    cin>>n>>m;
    
    dn=(n%12)*30 + (double)30*m/60;
    dm=6*m;


    //#include<iomanip>とcout<<fixed<<setprecision(6)が必要？
    //fixedを挟まないと上手く動かなかった

    cout<<fixed<<setprecision(6)<<min(abs(dn-dm), 360-abs(dn-dm))<<endl;


    
    return 0;
}