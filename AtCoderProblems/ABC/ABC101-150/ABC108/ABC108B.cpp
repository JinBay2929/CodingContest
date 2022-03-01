
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>

using namespace std;   



int main() {
  int a, b, c, d;
  cin >>a>>b>>c>>d;
  
  int dx=c-a;
  int dy=d-b;

  cout<<c-dy<<" "<<d+dx<<" "<<a-dy<<" "<<b+dx<<endl;
  

  
  return 0;
}
    

    
    
    
    
