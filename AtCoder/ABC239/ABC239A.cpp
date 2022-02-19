
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <iomanip>



using namespace std;   


int main(){
    int h;

    double ans;
    

    cin>>h;

    ans=(double)((double)sqrt(h) * (double)sqrt(12800000+h));

    
    cout<<setprecision(16)<<ans<<endl;
    
   
    return 0;
}