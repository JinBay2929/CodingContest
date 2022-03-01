#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;



int main(){
    int n, a, musiri=0;
    
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        while(true){
            if(a%6==3||a%6==1){
                break;
            }else{
                a--;
                musiri++;
            }
        }
    }

    cout<<musiri<<endl;
    
    
    return 0;
}