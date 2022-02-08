
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n;
    long long nums[90];
    cin>>n;

    nums[0]=2;
    nums[1]=1;
    for(int i=2; i<=n; i++){
        nums[i]=nums[i-1]+nums[i-2];
    }

    cout<<nums[n]<<endl;

    
    return 0;
}