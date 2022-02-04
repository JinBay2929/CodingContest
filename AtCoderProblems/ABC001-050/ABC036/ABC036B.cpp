
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include <numeric>



using namespace std;   

int main(){
    int n;
    char s, marks[50][50];

    cin>>n;

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            cin>>marks[j][i];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<marks[i][j];
        }
        cout<<endl;
    }

    
    return 0;
}