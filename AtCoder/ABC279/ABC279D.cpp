
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <stack>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
#include <functional>
#include <bitset>
#include <iomanip>
using namespace std;   



//T(n)=n*b + a*(n+1)**(-1/2)の最小値を出す問題。
//微分して最小値をとるような整数nの候補を二か所洗い出し、minで真の
//最小値をだした。
//longlongを使わないと当然オーバーフロー。
//回答時は<<fixed << setprecision(15)で下の方の桁まで出す。

long long a, b;
double ans;

double cal_n(long long a, long long b){
  double tmp=a/b/2;
  double beki=2.0/3.0;
  double ans = pow(tmp, beki)-1;

  return ans;
}

double cal_t(long long a, long long b, long long n){
  double ans = n*b + a*pow(n+1, -0.5);
  return ans;
}

int main(){
  cin>>a>>b;
 


  long long n1= ans=cal_n(a, b)/1;
  long long n2=n1+1;

  ans = min(cal_t(a, b, n1), cal_t(a, b, n2));
  cout<<fixed << setprecision(15)<<ans<<endl;



  return 0;
}
    

    
    
    
    
