
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int x, y;
    vector<int> ga={1, 3, 5, 7, 8, 10, 12};
    vector<int> gb={4, 6, 9, 11};
    string ans="No";
    
    cin>>x>>y;

   
    if(x==2 || y==2){
        ans="No";
    }else{
        if(find(ga.begin(), ga.end(), x)!=ga.end() &&
         find(ga.begin(), ga.end(), y)!=ga.end()){
            ans="Yes";
        }else if(find(gb.begin(), gb.end(), x)!=gb.end() &&
         find(gb.begin(), gb.end(), y)!=gb.end()){
             ans="Yes";
         }
    }
    
    cout<<ans<<endl;
    
 
    
    
    return 0;
}