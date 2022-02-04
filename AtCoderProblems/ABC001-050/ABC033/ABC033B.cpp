
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int n, p, citynumber=-1;
    vector<int> population;
    vector<string> cities;
    string s, ans;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>s>>p;
        cities.push_back(s);
        population.push_back(p);
    }

    int sum=accumulate(population.begin(), population.end(), 0);
    for(int i=0; i<n; i++){
        if(population[i]>sum/2){
            citynumber=i;
        }
    }

    if(citynumber==-1){
        ans="atcoder";
    }else{
        ans=cities[citynumber];
    }
    

    
    
    cout<<ans<<endl;

    
    return 0;
}