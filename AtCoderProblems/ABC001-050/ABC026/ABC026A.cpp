#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    int a, max=0;
    cin>>a;

    for(int i=1; i<=(a/2)+1; i++){
        if(i*(a-i)>max){
            max=i*(a-i);
        }
    }

    cout<<max<<endl;
    
    return 0;
}