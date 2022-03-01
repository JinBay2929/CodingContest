#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){
    int n;
    double sum;
    cin>>n;

    for(int i=1; i<=n; i++){
        sum+=((double)i/n)*10000;
    }

    cout<<sum<<endl;

    

    return 0;
}