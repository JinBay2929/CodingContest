
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int a, b, c, ans;
    vector<int> colors;
    cin>>a>>b>>c;

    colors.push_back(a);
    colors.push_back(b);
    colors.push_back(c);

    sort(colors.begin(), colors.end());

    colors.erase(unique(colors.begin(), colors.end()), colors.end());

    ans=colors.size();




    
    cout<<ans<<endl;
    
    return 0;
}