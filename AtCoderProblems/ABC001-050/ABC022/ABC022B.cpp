#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    int n, a, counter=0;
    vector<int> as;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        if(find(as.begin(), as.end(), a)==as.end()){
            as.push_back(a);
        }else{
            counter++;
        }
    }

    cout<<counter<<endl;
    
    
    return 0;
}