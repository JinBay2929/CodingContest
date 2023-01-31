
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

using ll=long long;

//WA。むりぽ

ll t, n, k;
string s;

bool kaibun(string s, ll len){
  for(int i=0; i<len/2+1; i++){
    if(s[i]!=s[len-1-i])return false;
  }
  return true;
}

int main(){
  cin>>t;

  for(int x=1; x<=t; x++){
    cin>>n>>k>>s;


    ll amari=k%n;
    bool flag;

    if(amari==0){
      if(k/n%2==1)cout<<"Yes"<<endl;
    }
    else{
      if(n%amari==0)flag=true;
      else flag=false;

      //cout<<amari<<endl;

      s+=s;
      for(int i=0; i<n/amari-1; i++){
        string s1=s.substr(i*amari, amari*2);
        
        if(!kaibun(s1, amari*2))flag=false;
      }

      if(flag)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
    
  
    


    // if(k>=n){
    //   ll amari=k%n;
    //   bool flag;

    //   if(n%amari==0)flag=true;
    //   else flag=false;

    //   //cout<<amari<<endl;

    //   for(int i=0; i<n/amari-1; i++){
    //     s+=s;
    //     string s1=s.substr(i*amari, amari);
    //     string s2=s.substr((i+1)*amari, amari);
    //     reverse(s2.begin(), s2.end());

    //     //cout<<s1<<" "<<s2<<endl;
    //     if(s1!=s2)flag=false;
    //   }

    //   if(flag)cout<<"Yes"<<endl;
    //   else cout<<"No"<<endl;
    // }
    // else{
    //   string tmpf="", tmpb="";
    //   bool flagf, flagb;

    //   for(int i=0; i<n-k; i++){
    //     tmpf+=s[i];
    //   }
    //   flagf=kaibun(tmpf);

    //   for(int i=k; i<n; i++){
    //     tmpb+=s[i];
    //   }
    //   flagb=kaibun(tmpb);

    //   cout<<flagf<<" "<<flagb<<endl;

    //   // if(flagf && flagb)cout<<"Yes"<<endl;
    //   // else cout<<"No"<<endl;

    // }
    

  }



  
  return 0;
}
    
