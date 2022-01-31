#include<iostream>
#include<stdio.h>
#include <vector>

using namespace std;

//数値がでかすぎるときは結構簡単にオーバーフローする
//とりあえずlong long使うのが楽
int main(){
    int n,m,l;
    long long num;
    cin>>n>>m>>l;
    long long a[100][100], b[100][100], c[100][100];

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>num;
        a[i][j]=num;
    }
}
for(int i=0; i<m; i++){
    for(int j=0; j<l; j++){
        cin>>num;
        b[i][j]=num;
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
        long long total=0;
        for(int k=0; k<m; k++){
            total+=a[i][k]*b[k][j];
        }
        if(j!=0){cout<<" ";}
        cout<<total;
    }
    cout<<endl;
}

    return 0;
}