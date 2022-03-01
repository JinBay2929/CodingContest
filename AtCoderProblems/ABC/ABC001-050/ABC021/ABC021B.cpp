#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;   

//p1,p2...pkにa,bがあってはいけない
//pのなかで重複があってはいけない
int main(){
    int n, a, b, k, p;
    cin>>n>>a>>b>>k;
    int ps[100];
    bool able=1;

    for(int i=0; i<k; i++){
        cin>>p;
        ps[i]=p;
    }

    //p1,p2...pkにa,bがあってはいけない
    for(int i=0; i<k; i++){
        if(ps[i]==a||ps[i]==b){
            able=0;
            break;
        }
    }

    //pのなかで重複があってはいけない
    for(int i=0; i<k-1; i++){
        int tmp=ps[i];
        for(int j=i+1; j<k; j++){
            if(ps[j]==tmp){
                able=0;
                break;
            }
        }
    }
    if(able){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}